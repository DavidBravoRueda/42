/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:04:44 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/11 17:37:28 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int	ft_printf(const char *str, ...);

int	ft_percent(void);
int	ft_putchar(va_list ap);
int	ft_puthex(va_list ap, int uppercase);
int	ft_putint(va_list ap);
int	ft_putpointer(va_list ap);
int	ft_putstr(va_list ap);
int	ft_putunsigned(va_list ap);

int	ft_putchar_count(char c);
int	ft_putstr_count(char *str);

#endif
