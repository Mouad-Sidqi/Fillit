/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:20:08 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/11 22:46:53 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**get_tetr(int fd)
{
	char	*out;
	char	*pout;
	int		p;
	int		i;

	i = 0;
	p = 0;
	pout = ft_strnew(1);
	out = ft_strnew(4);
	while (get_next_line(fd, &out) > 0 && (ft_strlen(out) == 4 || out[0] == 0))
	{
		if (out[0] == '\0')
			pout = ft_strjoin(pout, ((++p >= 2 || i == 0) ? "#" : "\n"));
		else
		{
			p = 0;
			pout = ft_strjoin(pout, out);
		}
		i++;
	}
	if (i % 5 != 4)
		return (NULL);
	return (ft_strsplit(pout, '\n'));
}
