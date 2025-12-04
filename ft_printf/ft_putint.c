/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:29:20 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/04 17:23:49 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_punbr(int n)
{
	int		count;
	long	num;

	count = 0;
	num = n;
	if (num < 0)
	{
		count += ft_putchar_count('-');
		num = -num;
	}
	if (num >= 10)
		count += ft_putnbr(num / 10);
	count += ft_putchar_count((num % 10) + '0');
	return (count);
}

int	ft_putint(va_list ap)
{
	return (ft_punbr(va_arg(ap, int)));
}
