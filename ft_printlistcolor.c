/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlistcolor.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:59:03 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 08:56:48 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlistcolor(t_listopt *lst)
{
	if (lst == NULL)
		return ;
	if (strcmp(lst->content, "pa") == 0)
		printf(_RED);
	else if (strcmp(lst->content, "pb") == 0)
		printf(_CYAN);
	else if (strcmp(lst->content, "ra") == 0)
		printf(_GREEN);
	else if (strcmp(lst->content, "rb") == 0)
		printf(_YELLOW);
	else if (strcmp(lst->content, "rra") == 0)
		printf(_BLUE);
	else if (strcmp(lst->content, "rrb") == 0)
		printf(_PURPLE);
	else if (strcmp(lst->content, "sa") == 0)
		printf(_WHITE);
	else if (strcmp(lst->content, "sb") == 0)
		printf(_CYAN);
	printf("%s\n", lst->content);
	printf(_END);
	ft_printlistcolor(lst->next);
}
