/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:33:49 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/12 11:49:11 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(int *stacka, int *counta, int *stackb, int *countb)
{
	int	i;
	int	size;

	size = countb[0];
	i = *counta;
	while (i > 0)
	{
		stacka[i] = stacka[i - 1];
		i--;
	}
	stacka[0] = stackb[0];
	i = 0;
	while (i <= size)
	{
		stackb[i - 1] = stackb[i];
		i++;
	}
	(*counta)++;
	(*countb)--;
	ft_printf("\n\tPA\n");
}

void	ft_pb(int *stacka, int *counta, int *stackb, int *countb)
{
	int	i;
	int	size;

	size = counta[0];
	i = *countb;
	while (i > 0)
	{
		stackb[i] = stackb[i - 1];
		i--;
	}
	stackb[0] = stacka[0];
	i = 0;
	while (i <= size)
	{
		stacka[i - 1] = stacka[i];
		i++;
	}
	(*countb)++;
	(*counta)--;
	ft_printf("\n\tPB\n");
}
