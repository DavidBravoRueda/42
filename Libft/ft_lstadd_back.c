/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:12:35 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/21 13:22:15 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return (0);
	if (!*lst)
	{
		*lst = new;
		return (1);
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (1);
}
