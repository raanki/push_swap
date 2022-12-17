/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:19:02 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 08:39:37 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_adup(t_list **a, t_list **b, int size, t_listopt **result)
{
	t_list	*second;
	t_list	*third;

	second = (*a)->next;
	third = second->next;
	if (size == 2)
	{
		second = (*a)->next;
		if ((*a)->content > second->content)
			ft_swap_a(a, result);
	}
	else if (size == 3)
	{
		if ((*a)->content >= second->content && second->content >= third->content)
		{
			ft_swap_a(a, result);
			ft_push_b(a, b, result);
			ft_swap_a(a, result);
			ft_push_a(a, b, result);
			ft_swap_a(a, result);
		}
		else if ((*a)->content >= second->content && (*a)->content >= third->content && second->content <= third->content)
		{
			ft_swap_a(a, result);
			ft_push_b(a, b, result);
			ft_swap_a(a, result);
			ft_push_a(a, b, result);
		}
		else if ((*a)->content <= second->content && (*a)->content >= third->content && second->content >= third->content)
		{
			ft_push_b(a, b, result);
			ft_swap_a(a, result);
			ft_push_a(a, b, result);
			ft_swap_a(a, result);
		}
		else if ((*a)->content >= second->content && second->content <= third->content && (*a)->content <= third->content)
		{
			ft_swap_a(a, result);
		}
		else if ((*a)->content <= second->content && second->content >= third->content && (*a)->content <= third->content)
		{
			ft_push_b(a, b, result);
			ft_swap_a(a, result);
			ft_push_a(a, b, result);
		}
	}
}

void	ft_sort_3express_d(t_list **b, int size, t_listopt **result)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (b == NULL || *b == 0)
		return ;
	while (ft_checksorted_d(*b, size) != 1)
	{
		tmp = (*b)->next;
		tmp2 = tmp->next;
		if (ft_checksorted(*b, size))
		{
			ft_rotate_b(b, result);
		}
		else if ((*b)->content < tmp2->content)
		{
			ft_rotate_b(b, result);
		}
		else if ((*b)->content < tmp->content)
		{
			ft_swap_b(b, result);
		}
		else
		{
			ft_rotate_b(b, result);
		}
	}
}

void	ft_sort_3express(t_list **b, int size, t_listopt **result)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (b == NULL || *b == 0)
		return ;
	while (ft_checksorted(*b, size) != 1)
	{
		tmp = (*b)->next;
		tmp2 = tmp->next;
		if (ft_checksorted_d(*b, size))
		{
			ft_rotate_a(b, result);
		}
		else if ((*b)->content > tmp2->content)
		{
			ft_rotate_a(b, result);
		}
		else if ((*b)->content > tmp->content)
		{
			ft_swap_a(b, result);
		}
		else
		{
			ft_rotate_a(b, result);
		}
	}
}

void	ft_sort_bdup(t_list **a, t_list **b, int size, t_listopt **result)
{
	t_list	*second;
	t_list	*third;

	second = (*b)->next;
	third = second->next;
	if (size == 1)
		ft_push_a(a, b, result);
	else if (size == 2)
	{
		second = (*b)->next;
		if ((*b)->content < second->content)
			ft_swap_b(b, result);
		ft_push_a(a, b, result);
		ft_push_a(a, b, result);
	}
	else if (size == 3)
	{
		if ((*b)->content >= second->content && second->content >= third->content)
		{
			ft_push_a(a, b, result);
			ft_push_a(a, b, result);
			ft_push_a(a, b, result);
		}
		else if ((*b)->content >= second->content && (*b)->content >= third->content && second->content <= third->content)
		{
			ft_push_a(a, b, result);
			ft_swap_b(b, result);
			ft_push_a(a, b, result);
			ft_push_a(a, b, result);
		}
		else if ((*b)->content <= second->content && (*b)->content >= third->content && second->content >= third->content)
		{
			ft_swap_b(b, result);
			ft_push_a(a, b, result);
			ft_push_a(a, b, result);
			ft_push_a(a, b, result);
		}
		else if ((*b)->content >= second->content && second->content <= third->content && (*b)->content <= third->content)
		{
			ft_push_a(a, b, result);
			ft_swap_b(b, result);
			ft_push_a(a, b, result);
			ft_swap_a(a, result);
			ft_push_a(a, b, result);
		}
		else if ((*b)->content <= second->content && second->content >= third->content && (*b)->content <= third->content)
		{
			ft_swap_b(b, result);
			ft_push_a(a, b, result);
			ft_swap_b(b, result);
			ft_push_a(a, b, result);
			ft_push_a(a, b, result);
		}
		else if ((*b)->content <= second->content && second->content <= third->content)
		{
			ft_rotate_b(b, result);
			ft_swap_b(b, result);
			ft_push_a(a, b, result);
			ft_push_a(a, b, result);
			ft_rrotate_b(b, result);
			ft_push_a(a, b, result);
		}
	}
}
