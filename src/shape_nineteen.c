/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_nineteen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:22:28 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 20:10:37 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	shape_nineteen(char *s, char c, int i, int id)
{
	int size;

	if (id != 19)
		return ;
	size = ft_sqrt(ft_strlen(s));
	s[i] = c;
	s[i + size] = c;
	s[i + size + 1] = c;
	s[i + size + 2] = c;
	return ;
}
