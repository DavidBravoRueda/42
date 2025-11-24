/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mencmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:57:23 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/12 12:03:38 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_mencmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (unsigned char)*s1;
	str2 = (unsigned char)*s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
