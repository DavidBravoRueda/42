/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:29:53 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/11 11:34:22 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "hola";
	int	n;

	n = ft_strlen(str);
	printf("%d", n);
	return (0);
}*/
