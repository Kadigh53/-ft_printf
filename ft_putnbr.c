/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:14:09 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/11/03 15:34:54 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *slen)
{
	unsigned int	k;

	k = n;
	if (n < 0)
	{
		k = n * (-1);
		ft_putchar('-', slen);
	}
	if (k < 10)
		ft_putchar(k + '0', slen);
	else
	{
		ft_putnbr(k / 10, slen);
		ft_putnbr(k % 10, slen);
	}
}
