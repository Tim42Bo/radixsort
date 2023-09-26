/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergestacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:41:24 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/15 12:16:37 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mergestacks(int *stacka, int counta, int *stackb, int countb, int *result)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	
	while (i < counta && j < countb)
	{
		if (stacka[i] < stackb[j])
		{
			result[k++] = stacka[i++];
		}
		else
		{
			result[k++] = stackb[j++];
		}
	}
	while (i < counta)
	{
		result[k++] = stacka[i++];
	}
	while (j < countb)
	{
		result[k++] = stackb[j++];
	}
}
