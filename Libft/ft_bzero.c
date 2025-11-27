/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:53:27 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/25 16:52:24 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	while (n > 0)
	{
		*i = 0;
		i++;
		n--;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char s[5] = "hola";
	int	i = 0;

	printf("Antes: %s", s);
	ft_bzero(s, 2);
	printf("Despues: ");
	while (i < 5)
	{
		printf("%d", s[i]);
		i++;
	}
	return (0);
}*/
