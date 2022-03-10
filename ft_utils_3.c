/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:25:45 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/10 12:28:34 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_statistics.h"

int	ft_intarray_average(t_intarray tab)
{
	int	i;
	int	average;

	i = 0;
	average = 0;
	while (i < tab->len)
	{
		average += tab->data[i];
		i++;
	}
	average /= tab->len;
	return (average);
}

void	ft_intarray_sort(t_intarray tab)
{
	int	i;
	int	j;
	int	tmp;

	i = 0x0;
	while (i < tab->len)
	{
		j = i + 0x1;
		while (j < tab->len)
		{
			if (tab->data[i] > tab->data[j])
			{
				tmp = tab->data[i];
				tab->data[i] = tab->data[j];
				tab->data[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	ft_intarray_len(t_intarray tab)
{
	return (tab->len);
}

float	ft_intarray_median(t_intarray tab)
{
	int		i;
	float	median;
	int		len;

	i = 0;
	median = 0;
	ft_intarray_sort(tab);
	len = ft_intarray_len(tab);
	if (len % 2 == 1)
		median = tab->data[len / 2];
	else
		median = tab->data[len / 2] + tab->data[(len / 2) - 1];
	return (median / 2);
}
