/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_staistics.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 08:07:11 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/10 12:29:17 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STATISTICS_H
# define FT_STATISTICS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# define ENDL write(1, "\n", 1);

typedef struct s_intarray
{
	int	*data;
	int	len;
}	*t_intarray;

void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_atoi(char *str);
void		ft_putnbr(int n);
int			ft_isdigit(int c);
t_intarray	ft_intarray_create(int len);
void		ft_intarray_set(t_intarray tab, int index, int value);
void		ft_intarray_debug(t_intarray tab);
void		ft_intarray_destroy(t_intarray tab);
int			ft_intarray_sum(t_intarray tab);
float		ft_intarray_median(t_intarray tab);
int			ft_intarray_average(t_intarray tab);
void		ft_intarray_sort(t_intarray tab);
int			ft_intarray_len(t_intarray tab);

#endif
