/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:38:54 by anbravo-          #+#    #+#             */
/*   Updated: 2026/04/14 17:55:43 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_param(char **param)
{
	int	i;

	i = 0;
	if (!param)
		return ;
	while (param[i])
	{
		free(param[i]);
		i++;
	}
	free(param);
}

static void	process_input(char *av, t_stack **stack_a)
{
	char		**p;
	long int	n;
	int			i;

	p = ft_split(av, ' ');
	if (!p)
		return ;
	i = 0;
	while (p[i] != NULL)
	{
		n = ft_atoi(p[i]);
		if (input_is_correct(p[i]) && (n <= INT_MAX && n >= INT_MIN))
			stack_add(stack_a, stack_new((int)n));
		else
		{
			free_param(p);
			error_exit(stack_a, NULL);
		}
		free(p[i]);
		i++;
	}
	free(p);
}

static void	execute_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = get_stack_size(*stack_a);
	if (is_sorted(*stack_a))
		return ;
	if (size == 2)
		do_sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else
		sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	if (ac < 2 || (ac == 2 && !av[1][0]))
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (i < ac)
	{
		process_input(av[i], &stack_a);
		i++;
	}
	if (is_duplicate(stack_a))
		error_exit(&stack_a, NULL);
	get_index(stack_a, get_stack_size(stack_a));
	execute_sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
