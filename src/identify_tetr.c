/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify_tetr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:20:37 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:20:40 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*identify_tetr(char *str)
{
	int		*tab;
	char	*p;

	tab = (int*)malloc(sizeof(int) * 4);
	p = ft_strdup(str);
	tab[3] = ft_strchr(p, '#') - p;
	p = ft_strchr(p, '#');
	tab[0] = ft_strchr(p + 1, '#') - p;
	p += tab[0];
	tab[1] = ft_strchr(p + 1, '#') - p;
	p += tab[1];
	tab[2] = ft_strchr(p + 1, '#') - p;
	return (tab);
}
