/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:18:33 by anbravo-          #+#    #+#             */
/*   Updated: 2026/01/20 17:31:43 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_extract_line(char *storage)
{
	size_t	i;

	if (!storage || !storage[0])
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	return (ft_substr(storage, 0, i + (storage[i] == '\n')));
}

static char	*ft_clean_storage(char *storage)
{
	char	*new_storage;
	size_t	i;

	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (!storage[i])
	{
		free(storage);
		return (NULL);
	}
	new_storage = ft_substr(storage, i + 1, ft_strlen(storage) - i);
	free(storage);
	return (new_storage);
}

static char	*ft_read_to_buffer(int fd, char *storage)
{
	char	*buffer;
	ssize_t	b_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	b_read = 1;
	while (b_read > 0 && !ft_strchr(storage, '\n'))
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		if (b_read == -1)
		{
			free(buffer);
			free(storage);
			return (NULL);
		}
		buffer[b_read] = '\0';
		storage = ft_strjoin(storage, buffer);
	}
	free(buffer);
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = ft_read_to_buffer(fd, storage);
	if (!storage)
		return (NULL);
	line = ft_extract_line(storage);
	storage = ft_clean_storage(storage);
	return (line);
}

/*
#ifdef TEST_MAIN
# include <stdio.h>
# include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		line_count;

	line_count = 1;
	// Creamos/Abrimos un archivo de prueba
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error: No se pudo abrir test.txt. Crea el archivo primero.\n");
		return (1);
	}
	printf("--- INICIO DEL TEST ---\n");
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Línea [%d]: %s", line_count++, line);
		free(line); // ¡Vital para evitar leaks!
	}
	printf("\n--- FIN DEL TEST ---\n");
	close(fd);
	return (0);
}
#endif
*/
