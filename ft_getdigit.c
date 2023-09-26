/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:42:58 by tbornema          #+#    #+#             */
/*   Updated: 2023/09/14 18:24:24 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_getdigit(int num, int i)
{
	int digit;
	digit = 0;
	while (i > 0)
	{
		digit = num % 10;
		num = num / 10;
		i--;
	}
	return (digit);
}
