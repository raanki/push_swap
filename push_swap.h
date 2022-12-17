/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 10:02:44 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 15:19:24 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define _GREY "\033[30m"
# define _RED "\033[31m"
# define _GREEN "\033[32m"
# define _YELLOW "\033[33m"
# define _BLUE "\033[34m"
# define _PURPLE "\033[35m"
# define _CYAN "\033[36m"
# define _WHITE "\033[37m"
# define _END "\033[0m"

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}	t_list;

typedef struct s_listopt
{
	char			*content;
	struct s_listopt	*next;
}	t_listopt;

t_list	*ft_lstnew(int content);
void	ft_sort_3express(t_list **b, int size, t_listopt **result);
int	get_median(t_list *lst, int size);
void	ft_printlistcolor(t_listopt *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst);
int	ft_checksorted(t_list *lst, int size);
void	ft_swap_a(t_list **lst ,t_listopt **result);
void	ft_swap_b(t_list **lst ,t_listopt **result);
void	ft_swap_ss(t_list **a, t_list **b ,t_listopt **result);
void	ft_push_a(t_list **a, t_list **b ,t_listopt **result);
void	ft_push_b(t_list **a, t_list **b ,t_listopt **result);
t_list	*ft_unstack(t_list **a);
void	ft_rotate_a(t_list **lst ,t_listopt **result);
void	ft_rotate_b(t_list **lst ,t_listopt **result);
void	ft_rrotate_a(t_list **a ,t_listopt **result);
void	ft_rrotate_b(t_list **b ,t_listopt **result);
void	ft_rrotate_rr(t_list **a, t_list **b ,t_listopt **result);
void	ft_middlelst(t_list **a, t_list **b);
void	ft_sort_2(t_list **lst ,t_listopt **result);
void	ft_sort_2_d(t_list **lst ,t_listopt **result);
int	ft_quick_sort(t_list **a, t_list **b, int size, t_listopt **result);
int	ft_quick_sort_b(t_list **a, t_list **b, int size, t_listopt **result);
void	ft_printlist(t_list *lst);
int	ft_checksorted_d(t_list *lst, int size);
void	ft_sort_3(t_list **a);
void	ft_sort_3d(t_list **a);
int	ft_median(t_list *lst, int size);
void	ft_sort_bdup(t_list **a, t_list **b, int size ,t_listopt **result);
void	ft_sort_adup(t_list **a, t_list **b, int size ,t_listopt **result);
void	ft_lstadd_backchar(t_listopt **lst, t_listopt *new);
void	add_move(t_listopt **result, char *s);
t_listopt	*ft_lstnewstr(char *s);
t_listopt	*ft_lstlastchar(t_listopt *lst);
void	ft_lstclearchar(t_listopt **lst);
void	simply(t_listopt **lst);
int	ft_strcmp(const char *s1, const char *s2);
void	ft_printlistchar(t_listopt *lst);
void	ft_sort_3express_d(t_list **b, int size, t_listopt **result);
void	sort_12d(t_list **a, t_list **b, t_listopt **result);
void	sort_5(t_list **a, t_list **b, t_listopt **result);
void	sort_4(t_list **a, t_list **b, t_listopt **result);
int	check_double(t_list *lst); 
 #endif
