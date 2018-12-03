/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:07:58 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/11/08 20:12:19 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <fcntl.h>
# include "get_next_line.h"

void	shape_thirtfourtfift(char *s, char c, int i, int id);
int		ft_countdigit(char *tab, int size, char n);
char	**get_tetr(int fd);
int		*queueing(char **str);
int		*identify_tetr(char *str);
int		tetr_one(int *tab);
int		tetr_two(int *tab);
int		tetr_three(int *tab);
int		tetr(int *tab);
void	dot_grid(char **str, int length);
int		valid_tetr_one(char *tab, int i, int id, int size);
int		valid_tetr_two(char *t, int i, int id, int s);
int		valid_tetr_three(char *tab, int i, int id, int size);
int		valid_tetr(char *tab, int i, int id, int size);
void	shape_onetwothree(char *s, char c, int i, int id);
void	shape_fourfivesix(char *s, char c, int i, int id);
void	shape_seveneightnine(char *s, char c, int i, int id);
void	shape_teneleventwelve(char *s, char c, int i, int id);
void	shape_thirtfourtfift(char *s, char c, int i, int id);
void	shape_sixtseventeignt(char *s, char c, int i, int id);
void	shape_nineteen(char *s, char c, int i, int id);
void	put(char **str, int id, char c, int i);
void	unput(int id, char **out, int i);
void	pieces(int **t);
void	placing(char **out, int **tab);
char	*find_square(int *tab);
int		errors(int fd, int argc, int invalid);
int		main(int argc, char **argv);
int		ft_sqrt(int nb);
#endif
