/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:00:19 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/21 11:43:39 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(int argc, char **argv)
{
	int		*stacka;
	int		*stackb;
	int		i;
	int		counta;
	int		countb;
	int 	j = 1; 
	int		k;
	int		num;
	int		*result;

	k = 0;
	num = 0;
	counta = argc - 1;
	countb = counta;
	stackb = ft_safeinitstr(countb);
	stacka = ft_safeinitstr(counta);
	result = ft_safeinitstr(counta * 2);
	i = 0;
	while (j <= counta)
	{
		num = ft_atoi(argv[j]);
		if (num >= 0)
		{
			stacka[i++] = num;
		}
		else
		{
		stackb[k++] = num;
		countb++;
		}
		j++;
	}
	counta = i;
	countb = k;
	ft_radixsort(stacka, &counta);
	ft_negativeradixsort(stackb, &countb);
	ft_mergestacks(stacka, counta, stackb, countb, result);
	ft_printf("\n\tSORTED\n");
	counta = argc -1;
	ft_printresult(result, &counta);
    return (0);
}
