/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:13:49 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/04 18:12:34 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar_count(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_count(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr_count("(null)"));
	while (str[i])
	{
		ft_putchar_count(str[i]);
		i++;
	}
	return (i);
}

int	put_converter(char c, va_list ap)
{
	if (c == '%')
		return (ft_percent());
	if (c == 'c')
		return (ft_putchar(ap));
	if (c == 's')
		return (ft_putstr(ap));
	if (c == 'p')
		return (ft_putpointer(ap));
	if (c == 'd' || c == 'i')
		return (ft_putint(ap));
	if (c == 'u')
		return (ft_putunsigned(ap));
	if (c == 'x')
		return (ft_puthex(ap, 1));
	if (c == 'X')
		return (ft_puthex(ap, 0));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += put_converter(str[i], ap);
		}
		else
			count += ft_putchar_count(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
