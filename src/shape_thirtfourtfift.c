/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_thirtfourtfift.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:23:00 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:23:03 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	shape_thirtfourtfift(char *s, char c, int i, int id)
{
	int size;

	size = ft_sqrt(ft_strlen(s));
	if (id == 13)
	{
		s[i] = c;
		s[i + 1] = c;
		s[i + 2] = c;
		s[i + size] = c;
	}
	if (id == 14)
	{
		s[i] = c;
		s[i + size] = c;
		s[i + 2 * size] = c;
		s[i + 2 * size + 1] = c;
	}
	if (id == 15)
	{
		s[i] = c;
		s[i + size - 2] = c;
		s[i + size - 1] = c;
		s[i + size] = c;
	}
	return ;
}
