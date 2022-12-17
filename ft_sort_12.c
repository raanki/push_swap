/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_12.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:40:32 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 09:04:58 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void sort_12d(t_list **a, t_list **b, t_listopt **result)
{
	ft_swap_a(a, result);
	ft_rotate_a(a, result);
	ft_rotate_a(a, result);
	ft_sort_adup(a, b, 3, result);
}*/

void	sort_5(t_list **a, t_list **b, t_listopt **result)
{
	int		min1;
	int		min2;
	t_list	*tmp;
	int		i;
	int		check;

	i = 0;
	check = 0;
	tmp = (*a);
	min1 = (*a)->content;
	while ((tmp) != NULL)
	{
		if (min1 > tmp->content)
			min1 = tmp->content;
		tmp = tmp->next;
	}
	tmp = (*a);
	if (min1 == (*a)->content)
		min2 = (*a)->next->content;
	else
		min2 = (*a)->content;
	while ((tmp) != NULL)
	{
		if (min2 > tmp->content && tmp->content != min1)
			min2 = tmp->content;
		tmp = tmp->next;
	}
	tmp = (*a);
	while (i <= ft_lstsize(*a) && check != 2)
	{
		if ((*a)->content == min1 || (*a)->content == min2)
		{
			ft_push_b(a, b, result);
			check++;
		}
		else
			ft_rotate_a(a, result);
		i++;
	}
	ft_sort_3express(a, 3, result);
	if ((*b)->content < (*b)->next->content)
		ft_swap_b(b, result);
	ft_push_a(a, b, result);
	ft_push_a(a, b, result);
}

void	sort_4(t_list **a, t_list **b, t_listopt **result)
{
	int		min1;
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = (*a);
	min1 = (*a)->content;
	while ((tmp) != NULL)
	{
		if (min1 > tmp->content)
			min1 = tmp->content;
		tmp = tmp->next;
	}
	tmp = (*a);
	while (i <= ft_lstsize(*a))
	{
		if ((*a)->content == min1)
		{
			ft_push_b(a, b, result);
			break ;
		}
		else
			ft_rotate_a(a, result);
		i++;
	}
	ft_sort_3express(a, 3, result);
	ft_push_a(a, b, result);
}
