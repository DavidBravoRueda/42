/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:56:18 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/17 12:42:44 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	res = malloc(len1 + len2 + 1);
	if (!res)
		return (NULL);
	i = -1;
	while (i++ < len1)
		res[i] = s1[i];
	i = -1;
	while (i++ < len2)
		res[len1 + i] = s2[i];
	res[len1 + len2] = '\0';
	return (res);
}
