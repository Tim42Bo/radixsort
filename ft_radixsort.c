/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radixsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:06:08 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/15 12:16:45 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radixsort(int *array, int *count)
{
	int	max;
	int	i;
	int	maxdigit;
	
	
	max = ft_getmaxint(array, count);
	maxdigit = 0;
	while (max > 0)
	{
		max = max / 10;
		maxdigit++;
	}
	i = 1;
	while (i <= maxdigit)
	{
		ft_countingsortdigit(array, count, i);
		i++;	
	}
}

void	ft_negativeradixsort(int *array, int *count)
{
	int	i;
	int	size;

	size = *count;
	i = 0;
	while (i < size)
	{
		array[i] = -array[i];
		i++;
	}
	ft_radixsort(array, count);
	i = 0;
	while (i < size)
	{
		array[i] = -array[i];
		i++;
	}
	ft_strintrev(array, count);
}
