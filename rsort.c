/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:59:59 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/15 13:54:23 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *stacka, int *counta)
{
	int	i;
	int	size;
	int	tmp;

	i = 0;
	size = *counta;
	tmp = stacka[0];
	while (i <= size - 1)
	{
		stacka[i] = stacka[i + 1];
		i++;
	}
	i = *counta;
	stacka[i - 1] = tmp;
	ft_printf("\n\tRA\n");
}

void	ft_rb(int *stackb, int *countb)
{
	int	i;
	int	size;
	int	tmp;

	i = 0;
	size = *countb;
	tmp = stackb[0];
	while (i <= size)
	{
		stackb[i - 1] = stackb[i];
		i++;
	}
	i = *countb;
	stackb[i - 1] = tmp;
	ft_printf("\n\tRB\n");
}

void	ft_rr(int *stacka, int *counta, int *stackb, int *countb)
{
	ft_ra(stacka, counta);
	ft_rb(stackb, countb);
}
