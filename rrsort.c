/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrsort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:12:42 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/15 12:17:45 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(int *stacka, int *counta)
{
	int	i;
	int	size;
	int	tmp;
	int	j;
	
	size = *counta;
	i = *counta - 2;
	j = size - 1;
	tmp = stacka[size - 1];
	while (j > 0)
	{
		stacka[j] = stacka[i];
		i--;
		j--;
	}
	stacka[0] = tmp;
	
	ft_printf("\n\tRRA\n");
}

void	ft_rrb(int *stackb, int *countb)
{
	int	i;
	int	size;
	int	tmp;
	int	j;
	
	size = *countb;
	i = *countb - 2;
	j = size - 1;
	tmp = stackb[size - 1];
	while (j > 0)
	{
		stackb[j] = stackb[i];
		i--;
		j--;
	}
	stackb[0] = tmp;
	ft_printf("\n\tRRB\n");
}

void	ft_rrr(int *stacka, int *counta, int *stackb, int *countb)
{
	ft_rra(stacka, counta);
	ft_rrb(stackb, countb);
}
