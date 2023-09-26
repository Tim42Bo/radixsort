/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countingsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:00:15 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/14 15:12:44 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strintrange(int *array, int *count)

{
	int	max;
	int	min;
	int	range;
	
	max = ft_getmaxint(array, count);
	ft_printf("max:%d\n", max);
	min = ft_getlowint(array, count);
	ft_printf("min:%d\n", min);
	range = max - min +1;
	return (range);
}

void	ft_countingsort(int *array, int *count, int keyvalue)

{
	int	i;
	int	size;
	int *countarray;
	int	*newarray;
	int	min;
	int	index;
	

	i = 0;
	size = *count;
	countarray = ft_safeinitstr(size);
	newarray = ft_safeinitstr(size);
	min = ft_getlowint(array, count);
	
	
	while (i < size)
	{
		index = array[i] - min;
		countarray[index]++;
		i++;

	}
	i = 1;
	while (i < keyvalue)
	{
		countarray[i] += countarray[i - 1];
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		newarray[countarray[array[i] - min] - 1] = array[i];
		countarray[array[i] - min]--;
		i--;	
	}
	i = 0;
	while (i < size)
	{
		array[i] = newarray[i];
		i++;
	}
	free(countarray);
	free(newarray);
}

