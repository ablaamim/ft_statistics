/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 08:20:19 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/10 08:54:26 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_statistics.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0x0;
	sign = 1;
	while (*str >= 7 && *str <= 14)
		str++;
	if (*str == '-')
		sign *= -1;
	while (*str == '+' || *str == '-')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + *str - 48;
		str++;
	}
	return (res * sign);
}

void	ft_putnbr(int n)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}
