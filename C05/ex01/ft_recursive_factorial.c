/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkusasla <zkusasla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:47:42 by zkusasla          #+#    #+#             */
/*   Updated: 2022/04/10 16:36:44 by zkusasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial (nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}
