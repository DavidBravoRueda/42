/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:34:06 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/04 17:23:47 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_punbr_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_punbr_unsigned(n / 10);
	count += ft_putchar_count((n % 10) + '0');
	return (count);
}

int	ft_putunsigned(va_list ap)
{
	return (ft_punbr_unsigned(va_arg(ap, unsigned int)));
}