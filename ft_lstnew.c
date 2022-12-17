/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:40:52 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 08:03:38 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*l;

	l = malloc(sizeof(t_list));
	if (l == NULL)
		return (l);
	l->content = content;
	l->next = NULL;
	return (l);
}

t_listopt	*ft_lstnewstr(char *s)
{
	t_listopt	*l;

	l = malloc(sizeof(t_listopt));
	if (l == NULL)
		return (l);
	l->content = s;
	l->next = NULL;
	return (l);
}
