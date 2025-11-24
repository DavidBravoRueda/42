/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:18:05 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/14 17:25:41 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i++] = 0;
	}
	return (tmp);
}
