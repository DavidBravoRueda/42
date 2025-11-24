/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:20:39 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/12 12:29:57 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *tittle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (tittle[0] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == tittle[j] && big[i + j] && i + j < len)
		{
			j++;
			if (tittle[j] == 0)
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
