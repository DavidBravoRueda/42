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

static char	*ft_extract_line_remaider(char *line_buffer)
{
    char	*rem;
    size_t	i;

    i = 0;
    while (line_buffer[i] && line_buffer[i] != '\n')
        i++;
    if (!line_buffer[i] || (line_buffer[i + 1])
        return(NULL);
    rem = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
    line_buffer[i + 1] = '\0';
    return (rem);
}

static char *ft_read_to_buffer(int fd, char *left_c)
{
    char    *buff;
    char    *temp;
    ssize_t bytes_read;

    buff = malloc(BUFFER_SIZE + 1);
    if (!buff)
        return (NULL);
    bytes_read = 1;
    while (bytes_read > 0 && !ft_strchr(left_c, '\n'))
    {
        bytes_read = read(fd, buff, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            free(buff);
            free(left_c);
            return (NULL);
        }
        buff[bytes_read] = '\0';
        temp = left_c;
        left_c = ft_strjoin(temp, buff);
        free(temp);
    }
    free(buff);
    return (left_c);
}

char    *get_next_line(int fd)
{
    static char	*leftover;
    char		*line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    leftover = ft_read_to_buffer(fd, leftover);
    if (!leftover || *leftover == '\0')
    {
        free(leftover);
        leftover = NULL;
        return (NULL);
    }
    line = leftover;
    leftover = ft_extract_line_remaider(line);
    return (line);
}