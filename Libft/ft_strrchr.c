/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:30:18 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/03 10:49:32 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	const char		*res;
	char			cc;

	cc = (char) c;
	res = (void *) 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		res = (char *) &s[i];
	return ((char *)res);
}

/*#include <stdio.h>
int	main(void)
{
	const char	*str = "hello, world!";
	char	c = 'o';
	char	*result;

	result = ft_strrchr(str, c);
	if (result)
	{
		printf("%s", c, result)
	}
	else
	{
		printf(c);
	}
	return (0);
}*/
