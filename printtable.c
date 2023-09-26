/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:36:34 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/21 11:41:37 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printtable(int *stacka, int *counta, int *stackb, int *countb)
{
	int	i;
	int	j;
	int	lena;
	int	lenb;

	i = 0;
	j = 0;
	lena = *counta;
	lenb = *countb;
	while (i < lena)
	{
		ft_printf("\na[%d]: %d", i, stacka[i]);
		if (j < lenb)
			ft_printf("\tb[%d]: %d\n", j, stackb[j]);
		else 
			ft_printf("\n");
		i++;
		j++;
		ft_printf("\n");
	}
}

void	ft_printresult(int *array, int *count)
{
	int	x;

	
	x = 0;
	while (x < *count)
	{
		ft_printf("%d ", array[x]);
		x++;
	}
	ft_printf("\n");
}
