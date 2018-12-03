/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queueing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:20:23 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/11 19:01:27 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*queueing(char **str)
{
	int i;
	int *queue;

	i = 0;
	queue = (int*)malloc(sizeof(int) * 56);
	while (i < 56)
		queue[i++] = 0;
	queue[0] = -1;
	if (str == NULL)
		return (queue);
	i = 0;
	while (str[i] != NULL)
	{
		if (i >= 26 || (ft_strlen(str[i]) != 16 || ft_countdigit(str[i], 16, '#'
) != 4 || ft_countdigit(str[i], 16, '.') != 12
) || (tetr(identify_tetr(str[i])) == 0))
		{
			queue[0] = -1;
			return (queue);
		}
		queue[i] = tetr(identify_tetr(str[i]));
		i++;
	}
	return (queue);
}
