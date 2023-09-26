/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ssort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:17:55 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/12 13:16:20 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(int *stacka)
{
	int	tmp;

	if ((!stacka[0]) || (!stacka[1]) || (!stacka[2]))
	{
		return ;
	}
	tmp = stacka[1];
	stacka[1] = stacka[2];
	stacka[2] = tmp;
	ft_printf("\n\tSA\n");
}

void	ft_sb(int *stackb)
{
	int	tmp;

	if ((!stackb[0]) || (!stackb[1]) || (!stackb[2]))
	{
		return ;
	}
	tmp = stackb[1];
	stackb[1] = stackb[2];
	stackb[2] = tmp;
	ft_printf("\n\tSB\n");
}

void	ft_ss(int *stacka, int *stackb)
{
	ft_sa(stacka);
	ft_sb(stackb);
}
