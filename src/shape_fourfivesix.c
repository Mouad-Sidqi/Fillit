/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_fourfivesix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:22:08 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:22:09 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	shape_fourfivesix(char *s, char c, int i, int id)
{
	int size;

	size = ft_sqrt(ft_strlen(s));
	if (id == 4)
	{
		s[i] = c;
		s[i + 1] = c;
		s[i + size + 1] = c;
		s[i + size + 2] = c;
	}
	if (id == 5)
	{
		s[i] = c;
		s[i + size - 1] = c;
		s[i + size] = c;
		s[i + 2 * size - 1] = c;
	}
	if (id == 6)
	{
		s[i] = c;
		s[i + 1] = c;
		s[i + size - 1] = c;
		s[i + size] = c;
	}
	return ;
}
