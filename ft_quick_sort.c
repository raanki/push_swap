/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:33:14 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 19:50:54 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_median(t_list *lst, int size)
{
	int		min;
	int		max;
	t_list	*tmp;
	int		i;

	i = 0;
	if (lst == NULL)
		return (0);
	tmp = lst;
	min = tmp->content;
	max = tmp->content;
	while (tmp != NULL && i < size)
	{
		if (min > tmp->content)
			min = tmp->content;
		if (max < tmp->content)
			max = tmp->content;
		tmp = tmp->next;
		i++;
	}
	min = min / 2;
	max = max / 2;
	return (min + max);
}

int	ft_quick_sort(t_list **a, t_list **b, int size, t_listopt **result)
{
	int	pivot;
	int	i;
	int	size_b;
	int	size_a;

	if (ft_checksorted(*a, size))
		return (1);
	 /*if (ft_lstsize(*a) <= 3)
	    {
	    	if (ft_lstsize(*a) == 3)
	    	ft_sort_3express(a, ft_lstsize(*a), result);
	    	if (ft_lstsize(*a) == 2)
	    	ft_sort_2(a, result);
	    	return (1);
	    }*/
	if (size <= 3)
	{
		ft_sort_adup(a, b, size, result);
		return (1);
	}
	i = 0;
	pivot = ft_median(*a, size);
	size_b = 0;
	size_a = 0;
	while (i < size)
	{
		if (b != NULL && *b != NULL && (*a)->content > (*a)->next->content && (*b)->content < (*a)->next->content)
			ft_swap_a(a, result);
		if ((*a)->content <= pivot)
		{
			ft_push_b(a, b, result);
			size_b++;
		}
		else
		{
			ft_rotate_a(a, result);
			size_a++;
		}
		i++;
	}
	i = 0;
	while (i < size_a)
	{
		ft_rrotate_a(a, result);
		i++;
	}
	return (ft_quick_sort(a, b, size_a, result) && ft_quick_sort_b(a, b, size_b, result));
}

int	ft_quick_sort_b(t_list **a, t_list **b, int size, t_listopt **result)
{
	int	pivot;
	int	i;
	int	size_b;
	int	size_a;

	if (ft_checksorted_d(*b, size))
	{
		while (size--)
			ft_push_a(a, b, result);
		return (1);
	}
	if (size <= 3)
	{
		ft_sort_bdup(a, b, size, result);
		return (1);
	}
	i = 0;
	pivot = ft_median(*b, size);
	size_b = 0;
	size_a = 0;
	while (i < size)
	{
		if ((*b)->content >= pivot)
		{
			ft_push_a(a, b, result);
			size_a++;
		}
		else
		{
			ft_rotate_b(b, result);
			size_b++;
		}
		i++;
	}
	i = 0;
	while (i < size_b)
	{
		ft_rrotate_b(b, result);
		i++;
	}
	return (ft_quick_sort(a, b, size_a, result) && ft_quick_sort_b(a, b, size_b, result));
}
