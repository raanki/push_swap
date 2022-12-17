/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:30:36 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 15:03:43 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	ft_printlist(t_list *lst)
{
	if (lst == NULL)
		return ;
	printf("%d ", lst->content);
	ft_printlist(lst->next);
}

void	ft_printlistchar(t_listopt *lst)
{
	if (lst == NULL)
		return ;
	printf("%s\n", lst->content);
	ft_printlistchar(lst->next);
}

t_list	*ft_argtolist(int argc, char **argv)
{
	int		i;
	t_list	*lst;

	i = 1;
	lst = NULL;
	while (i < argc)
	{
		ft_lstadd_back(&lst, ft_lstnew(atoi(argv[i])));
		i++;
	}
	return (lst);
}

void	add_move(t_listopt **result, char *s)
{
	ft_lstadd_backchar(result, ft_lstnewstr(s));
}

int	check_arg(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc <= 1)
		return (0);
	i = 1;
	if (strcmp(argv[1], "c") == 0)
		i++;
	while (i < argc)
	{
		j = 0;
		while ('\0' != argv[i][j])
		{
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9')
						|| argv[i][j] == '-'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **(argv))
{
	t_list		*lst;
	t_list		*b;
	t_listopt	*result;
	int			i;

	i = 0;
	if (argc == 1)
		return (0);
	if (check_arg(argc, argv) == 0)
	{
		write (2, "Error fff\n", 6);
		return (0);
	}
	b = NULL;
	result = NULL;
	lst = ft_argtolist(argc, argv);
	if (check_double(lst) == 1)
	{
		free(lst);
		write (2, "Error Double\n", 6);
		return(0);
	}
	if (ft_lstsize(lst) == 5)
		sort_5(&lst, &b, &result);
	if (ft_lstsize(lst) == 4)
		sort_4(&lst, &b, &result);
	else if (ft_lstsize(lst) <= 3)
		ft_sort_3express(&lst, ft_lstsize(lst), &result);
	else
		ft_quick_sort(&lst, &b, ft_lstsize(lst), &result);
	simply(&result);
	ft_printlistchar(result);
	//    ft_printlist(lst);
	//    printf("\n");
	ft_lstclear(&lst);
	ft_lstclearchar(&result);
	return (0);
}
