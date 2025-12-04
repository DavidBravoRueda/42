/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:23:33 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/04 18:04:52 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_puthex_count(unsigned long num)
{
	int		count;
	char	*hex_chars;

	count = 0;
	hex_chars = "0123456789abcdef";
	if (num >= 16)
		count += ft_puthex_count(num / 16);
	count += ft_putchar_count(hex_chars[num % 16]);
	return (count);
}

int	ft_putpointer(va_list ap)
{
	unsigned long	ptr;
	int				count;

	ptr = (unsigned long)va_arg(ap, void *);
	count = ft_putstr_count("0x");
	if (ptr == 0)
		return (count + ft_puthex_count('0'));
	return (count + ft_puthex_count(ptr));
}
