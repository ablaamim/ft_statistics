/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 08:54:35 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/10 12:25:39 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_statistics.h"

int	ft_intarray_sum(t_intarray tab)
{
	int	i;
	int	sum;

	i = 0x0;
	sum = 0x0;
	while (i < tab->len)
	{
		sum += tab->data[i];
		i++;
	}
	return (sum);
}

t_intarray	ft_intarray_create(int len)
{
	int			i;
	t_intarray	new;

	i = 0x0;
	new = malloc (sizeof(t_intarray));
	new->len = len;
	new->data = malloc (sizeof(int) * len);
	while (i < len)
	{
		new->data[i] = 0x0;
		i++;
	}
	return (new);
}

void	ft_intarray_set(t_intarray tab, int index, int value)
{
	tab->data[index] = value;
}

void	ft_intarray_debug(t_intarray tab)
{
	int	i;

	i = 0x0;
	ft_putchar('[');
	while (i < tab->len - 1)
	{
		ft_putnbr(tab->data[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putnbr(tab->data[tab->len - 1]);
	ft_putchar(']');
}

void	ft_intarray_destroy(t_intarray tab)
{
	free(tab->data);
}
