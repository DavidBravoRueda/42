/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:18:51 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/18 17:29:30 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_digits(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*fr_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = n;
	len = count_digits(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
