/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:30:18 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/12 11:10:59 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	cc;
	int		i;

	cc = (char)c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		res = (char *)&s[i];
	return (res);
}
