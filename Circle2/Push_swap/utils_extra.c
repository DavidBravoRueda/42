/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_extra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:49:22 by anbravo-          #+#    #+#             */
/*   Updated: 2026/04/14 18:52:24 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	input_is_correct(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(t_stack *column)
{
	t_stack	*tmp;

	while (column)
	{
		tmp = column->next;
		while (tmp)
		{
			if (column->value == tmp->value)
				return (1);
			tmp = tmp->next;
		}
		column = column->next;
	}
	return (0);
}

void	error_exit(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a)
		free_stack(stack_a);
	if (stack_b && *stack_b)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit(1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}
