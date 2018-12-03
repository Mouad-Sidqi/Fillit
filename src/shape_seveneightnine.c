/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_seveneightnine.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:22:35 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:22:36 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	shape_seveneightnine(char *s, char c, int i, int id)
{
	int size;

	size = ft_sqrt(ft_strlen(s));
	if (id == 7)
	{
		s[i] = c;
		s[i + size] = c;
		s[i + size + 1] = c;
		s[i + 2 * size + 1] = c;
	}
	if (id == 8)
	{
		s[i] = c;
		s[i + size - 1] = c;
		s[i + size] = c;
		s[i + size + 1] = c;
	}
	if (id == 9)
	{
		s[i] = c;
		s[i + size] = c;
		s[i + size + 1] = c;
		s[i + 2 * size] = c;
	}
	return ;
}
