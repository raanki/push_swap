/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 01:03:03 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 08:10:12 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrotate_a(t_list **a, t_listopt **result)
{
	t_list	*tmp;
	t_list	*prec;

	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	prec = *a;
	tmp = ft_lstlast(*a);
	while (prec->next != tmp)
		prec = prec->next;
	ft_lstadd_front(a, tmp);
	prec->next = NULL;
	add_move(result, "rra");
}

void	ft_rrotate_b(t_list **b, t_listopt **result)
{
	t_list	*tmp;
	t_list	*prec;

	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	prec = *b;
	tmp = ft_lstlast(*b);
	while (prec->next != tmp)
		prec = prec->next;
	ft_lstadd_front(b, tmp);
	prec->next = NULL;
	add_move(result, "rrb");
}

void	ft_rrotate_rr(t_list **a, t_list **b, t_listopt **result)
{
	t_list	*tmp;
	t_list	*prec;

	if (a == NULL || *a == NULL || b == NULL || *b == NULL)
		return ;
	prec = *a;
	tmp = ft_lstlast(*a);
	while (prec->next != tmp)
		prec = prec->next;
	ft_lstadd_front(a, tmp);
	prec->next = NULL;
	prec = *b;
	tmp = ft_lstlast(*b);
	while (prec->next != tmp)
		prec = prec->next;
	ft_lstadd_front(b, tmp);
	prec->next = NULL;
	add_move(result, "rrr");
}
