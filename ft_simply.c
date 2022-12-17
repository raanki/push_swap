/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simply.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:38:25 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 20:30:17 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsizechar(t_listopt *lst)
{
	if (lst == NULL)
		return (0);
	return (1 + ft_lstsizechar(lst->next));
}

void	simply(t_listopt **lst)
{
	int			size;
	t_listopt	*tmp;
	t_listopt	*cure;
	t_listopt	*prec;

	size = ft_lstsizechar(*lst);
	if (size <= 3)
		return ;
	prec = (*lst);
	cure = (prec)->next;
	tmp = cure->next;
	while (prec != 0 && prec->next != 0 && prec->next->next != 0 && prec->next->next->next != 0) 
	{
		if ((strcmp(cure->content, "rb") == 0  && strcmp(tmp->content, "rrb") == 0)
				|| (strcmp(cure->content, "ra") == 0 && strcmp(tmp->content, "rra") == 0)
				|| (strcmp(cure->content, "rrb") == 0  && strcmp(tmp->content, "rb") == 0)
				|| (strcmp(cure->content, "rra") == 0 && strcmp(tmp->content, "ra") == 0)
				|| (strcmp(cure->content, "pa") == 0 && strcmp(tmp->content, "pb") == 0)
				|| (strcmp(cure->content, "pb") == 0 && strcmp(tmp->content, "pa") == 0))
		{
			prec->next = tmp->next;
			free(cure);
			free(tmp);
			prec = *lst;
			cure = (*lst)->next;
			tmp = cure->next;
		}
		/*else if ((strcmp(cure->content, "sb") == 0 && strcmp(tmp->content, "sa") == 0))
		{
			tmp->content[1] = 's';
			free(cure);
			prec->next = tmp;
			prec = *lst;
                        cure = (*lst)->next;
                        tmp = cure->next;
		}*/
		else
		{
			prec = prec->next;
			cure = cure->next;
			tmp = tmp->next;
		}
	}
}
