/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:21:28 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/04 18:06:52 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	return (ft_putstr_count(str));
}
