/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkusasla <zkusasla@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:13:10 by zkusasla          #+#    #+#             */
/*   Updated: 2022/04/14 23:13:12 by zkusasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*d;

	if (min >= max)
		return (0);
	len = max - min;
	d = malloc(len * sizeof(int));
	if (!d)
		return (0);
	i = 0;
	while (i < len)
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}
