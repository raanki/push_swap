/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 23:18:48 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 09:06:43 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_list **lst, t_listopt **result)
{
	t_list	*tmp;

	if (*lst == NULL || (*lst)->next == NULL )
		return ;
	tmp = *lst;
	*lst = ((*lst)->next);
	tmp->next = ((*lst)->next);
	((*lst)->next) = tmp;
	add_move(result, "sa");
}

void	ft_swap_b(t_list **lst, t_listopt **result)
{
	t_list	*tmp;

	if (*lst == NULL || (*lst)->next == NULL )
		return ;
	tmp = *lst;
	*lst = ((*lst)->next);
	tmp->next = ((*lst)->next);
	((*lst)->next) = tmp;
	add_move(result, "sb");
}

void	ft_swap_ss(t_list **a, t_list **b, t_listopt **result)
{
	t_list	*tmp;

	if (*a == NULL || (*a)->next == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	tmp = *a;
	*a = ((*a)->next);
	tmp->next = ((*a)->next);
	((*a)->next) = tmp;
	tmp = *b;
	*b = ((*b)->next);
	tmp->next = ((*b)->next);
	((*b)->next) = tmp;
	add_move(result, "ss");
}
