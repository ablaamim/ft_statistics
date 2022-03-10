/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_statistics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 08:05:41 by ablaamim          #+#    #+#             */
/*   Updated: 2022/03/10 12:37:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_statistics.h"

int	main(int argc, char **argv)
{
	int			i;
	t_intarray	tab;
	int		input;
	int		index;

	i = 0x1;
	index = 0x0;
	tab = ft_intarray_create(argc);
	while (i < argc)
	{
		input = ft_atoi(argv[i]);
		ft_intarray_set(tab, index, input);
		index++;
		i++;
	}
	tab->len = index;
	ft_putstr("User input : ");
	ft_intarray_debug(tab);
	ENDL;
	ENDL;
	ft_putstr("Sum of your input : ");
	ft_putnbr(ft_intarray_sum(tab));
	ENDL;
	ENDL;
	ft_putstr("Average of your input : ");
	ft_putnbr(ft_intarray_average(tab));
	ENDL;
	ENDL;
	ft_putstr("Median value of your input : ");
	printf("%f\n", ft_intarray_median(tab));
	ft_intarray_destroy(tab);
	return (EXIT_SUCCESS);
}
