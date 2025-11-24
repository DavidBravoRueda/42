/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 12:43:32 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/21 12:47:40 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
