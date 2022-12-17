/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 22:38:55 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 08:50:34 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_list *lst, int size)
{
	t_list	*tmp;
	t_list	*prec;
	int		i;

	i = 0;
	if (lst == NULL || lst->next == NULL)
		return (1);
	tmp = lst->next;
	prec = lst;
	while (tmp != NULL && i < size)
	{
		if (prec->content > tmp->content)
			return (0);
		tmp = tmp->next;
		prec = prec->next;
		i++;
	}
	return (1);
}

int	ft_checksorted_d(t_list *lst, int size)
{
	t_list	*tmp;
	t_list	*prec;
	int		i;

	i = 0;
	if (lst == NULL || lst->next == NULL)
		return (1);
	tmp = lst->next;
	prec = lst;
	while (tmp != NULL && i < size)
	{
		if (prec->content < tmp->content)
			return (0);
		tmp = tmp->next;
		prec = prec->next;
		i++;
	}
	return (1);
}

void	ft_sort_2(t_list **lst, t_listopt **result)
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = (*lst)->next;
	if (tmp->content > (*lst)->content)
		ft_swap_a(lst, result);
}

void	ft_sort_2_d(t_list **lst, t_listopt **result)
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = (*lst)->next;
	if (tmp->content > (*lst)->content)
		ft_swap_b(lst, result);
}
