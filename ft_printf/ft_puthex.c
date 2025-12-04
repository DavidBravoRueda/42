/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:35:36 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/04 18:01:32 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_puthex_count(unsigned int num, char *hex_chars)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_puthex_count(num / 16, hex_chars);
	count += ft_putchar_count(hex_chars[num % 16]);
	return (count);
}

int	ft_puthex(va_list ap, int uppercase)
{
	char	*hex_chars;

	if (uppercase)
		hex_chars = "0123456789ABCDEF";
	else
		hex_chars = "0123456789abcdef";
	return (ft_puthex_count(va_arg(ap, unsigned int), hex_chars));
}
