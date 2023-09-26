/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countingsortdigit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:59:19 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/15 14:04:09 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_countingsortdigit(int *array, int *count, int digit)
{
	int	i;
	int	size;
	int	*countarray;
	int	*newarray;
	int	index;
	int	absolute;

	i = 0;
	size = *count;
	countarray = ft_safeinitstr(10);
	newarray = ft_safeinitstr(size);
	while (i < size)
	{
		absolute = ft_absolute(array[i]);
		index = ft_getdigit(absolute, digit);
		countarray[index]++;
		i++;
	}

	i = 1;
	while (i < 10)
	{
		countarray[i] += countarray[i - 1];
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		index = ft_getdigit(array[i], digit);
		newarray[countarray[index] - 1] = array[i];
		countarray[index]--;
		i--;	
	}
	i = 0;
	while (i < size)
	{
		array[i] = newarray[i];
		i++;
	}
	free(countarray);
}
	