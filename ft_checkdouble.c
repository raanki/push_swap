/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdouble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 09:19:41 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 09:25:41 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_double(t_list	*lst)
{
	t_list	*tmp;
	t_list	*cure;

	cure = lst;
	while (cure != NULL)
	{
		tmp = cure->next;
		while (tmp != NULL)
		{
			if (cure->content == tmp->content)
				return (1);
			tmp = tmp->next;
		}
		cure = cure->next;
	}
	return (0);
}
