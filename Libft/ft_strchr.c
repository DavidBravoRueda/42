/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:15:15 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/11 17:21:33 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
