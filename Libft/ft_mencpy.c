/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mencpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:41:34 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/11 14:58:13 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_mencpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}
