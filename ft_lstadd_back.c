/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:34:40 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 08:55:29 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*(lst));
		tmp->next = new;
	}
}

void	ft_lstadd_backchar(t_listopt **lst, t_listopt *new)
{
	t_listopt	*tmp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlastchar(*(lst));
		tmp->next = new;
	}
}
