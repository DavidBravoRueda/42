/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:25:26 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/11 16:49:02 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	dst_len = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	src_len = j;
	if (dstsize == 0 || dst_len >= dstsize)
		return (dstsize + src_len);
	j = 0;
	while (src[j] != '\0' && (dst_len + j) < (dstsize - 1))
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}
