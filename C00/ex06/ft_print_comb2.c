/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkusasla <zkusasla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:36:34 by zkusasla          #+#    #+#             */
/*   Updated: 2022/03/30 14:52:22 by zkusasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b)
{
	int		a1;
	int		a2;
	int		b1;
	int		b2;

	a1 = (a / 10) + 48;
	a2 = (a % 10) + 48;
	b1 = (b / 10) + 48;
	b2 = (b % 10) + 48;
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (a != 98)
		write(1, &", ", 2);
}

void	ft_print_comb2(void)
{
	int		i0;
	int		i1;

	i0 = 0 ;
	while (i0 <= 98)
	{
		i1 = i0 + 1;
		while (i1 <= 99)
		{
			ft_putchar(i0, i1);
			i1++;
		}
		i0++;
	}
}
