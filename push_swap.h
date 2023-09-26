/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:48:44 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/21 11:39:22 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "libft/libft.h"

int		ft_sort(int argc,char **argv);
void	ft_sa(int *stacka);
void	ft_sb(int *stackb);
void	ft_ss(int *stacka, int *stackb);
void	ft_pa(int *stacka, int *counta, int *stackb, int *countb);
void	ft_pb(int *stacka, int *counta, int *stackb, int *countb);
void	ft_ra(int *stacka, int *counta);
void	ft_rb(int *stackb, int *countb);
void	ft_rr(int *stacka, int *counta, int *stackb, int *countb);
void	ft_rra(int *stacka, int *counta);
void	ft_rrb(int *stackb, int *countb);
void	ft_rrr(int *stacka, int *counta, int *stackb, int *countb);
void	ft_printtable(int *stacka, int	*counta, int *stackb, int	*countb);
void	ft_countingsort(int *array, int *count, int keyvalue);
void	ft_countingsortdigit(int *array, int *count, int digit);
int		ft_strintrange(int *array, int *count);
int		ft_getdigit(int num, int i);
void	ft_radixsort(int *array, int *count);
void	ft_mergestacks(int *stacka, int counta, int *stackb, int countb, int *result);
void	ft_negativeradixsort(int *array, int *count);
void	ft_printresult(int *array, int *count);


#endif