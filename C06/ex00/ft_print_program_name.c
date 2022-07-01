/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkusasla <zkusasla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:50:12 by zkusasla          #+#    #+#             */
/*   Updated: 2022/04/11 16:43:08 by zkusasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;

	i = 0;
	while (av[0][i] && ac)
	{
		write(1, &av[0][i], 1);
		++i;
	}
	write(1, "\n", 1);
	return (0);
}
