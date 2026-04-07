/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 13:33:31 by anbravo-          #+#    #+#             */
/*   Updated: 2026/04/07 12:45:46 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	input_is_correct(char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
	if ((str[i] == '-' || str[i] == '+') && (ft_strlen(str) > 1))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(t_stack *column)
{
	t_stack	*tmp2;

	while (column)
	{
		tmp2 = column->next;
		while (tmp2)
		{
			if (column->value == tmp2->value)
				return (1);
			tmp2 = tmp2->next;
		}
		column = column->next;
	}
	return (0);
}

void	get_index(t_stack *stack_a, int stack_size)
{
	t_stack	*ptr;
	t_stack	*biggest;
	int		value;

	while (--stack_size > 0)
	{
		ptr = stack_a;
		value = INT_MIN;
		biggest = NULL;
		while (ptr)
		{
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				biggest = ptr;
			}
			ptr = ptr->next;
		}
		if (biggest)
			biggest->index = stack_size;
		else
		{
			ptr = stack_a;
			while (ptr)
			{
				if (ptr->value == INT_MIN && ptr->index == 0)
					ptr->index = 1;
				ptr = ptr->next;
			}
		}
	}
}
