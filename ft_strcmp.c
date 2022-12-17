/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranki <ranki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:55:10 by ranki             #+#    #+#             */
/*   Updated: 2022/12/17 08:54:58 by ranki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *d)
{
	size_t	cpt;

	cpt = 0;
	while (d[cpt])
		cpt++;
	return (cpt);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	size_s1;
	int	size_s2;
	int	i;
	
	i = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < size_s1 && i < size_s2)
	{
		i++;
	}
	if (i >= size_s1 || i >= size_s2)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
