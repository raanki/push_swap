/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:22:55 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 08:51:10 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;
	t_list	*before;

	if (*lst == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		before = tmp;
		tmp = tmp->next;
		free(before);
	}
	*lst = 0;
}

void	ft_lstclearchar(t_listopt **lst)
{
	t_listopt	*tmp;
	t_listopt	*before;

	if (*lst == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		before = tmp;
		tmp = tmp->next;
		free(before);
	}
	*lst = 0;
}
