/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 13:33:31 by anbravo-          #+#    #+#             */
/*   Updated: 2026/04/14 18:49:57 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_stack *stack_a)
{
	t_stack	*ptr;
	t_stack	*compare;
	int		index;

	ptr = stack_a;
	while (ptr)
	{
		index = 1;
		compare = stack_a;
		while (compare)
		{
			if (ptr->value > compare->value)
				index++;
			compare = compare->next;
		}
		ptr->index = index;
		ptr = ptr->next;
	}
}
