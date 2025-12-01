/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:03:17 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/01 16:08:52 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		if (sign == 1 && result > 2147483647)
			return (2147483647);
		if (sign == -1 && result > 2147483648L)
			return (-2147483648);
		i++;
	}
	return ((int)(result * sign));
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = " --+++-3547abcv67";

	printf("%d", ft_atoi(str));
}*/
