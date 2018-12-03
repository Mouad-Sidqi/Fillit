/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_onetwothree.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:22:20 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:22:21 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	shape_onetwothree(char *s, char c, int i, int id)
{
	int size;

	size = ft_sqrt(ft_strlen(s));
	if (id == 1)
	{
		s[i] = c;
		s[i + 1] = c;
		s[i + size] = c;
		s[i + size + 1] = c;
	}
	if (id == 2)
	{
		s[i] = c;
		s[i + size] = c;
		s[i + 2 * size] = c;
		s[i + 3 * size] = c;
	}
	if (id == 3)
	{
		s[i] = c;
		s[i + 1] = c;
		s[i + 2] = c;
		s[i + 3] = c;
	}
	return ;
}
