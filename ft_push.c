/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 00:19:22 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 08:07:13 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_unstack(t_list **a)
{
	t_list	*tmp;

	if (*a == NULL)
		return (NULL);
	tmp = *a;
	*a = (*a)->next;
	return (tmp);
}

void	ft_push_a(t_list **a, t_list **b, t_listopt **result)
{
	if (*b == NULL)
		return ;
	ft_lstadd_front(a, ft_unstack(b));
	add_move(result, "pa");
}

void	ft_push_b(t_list **a, t_list **b, t_listopt **result)
{
	if (*a == NULL)
		return ;
	ft_lstadd_front(b, ft_unstack(a));
	add_move(result, "pb");
}
