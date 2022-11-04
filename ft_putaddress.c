/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:28:42 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/11/03 15:41:56 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	hx_putnbr_base(unsigned long nbr, char *base, int *slen)
{
	unsigned long	len;
	unsigned long	k;

	len = 0;
	while (base[len])
		len++;
	k = nbr;
	if (nbr < 0)
	{
		k = nbr * (-1);
		ft_putchar('-', slen);
	}
	if (k < len)
		ft_putchar(base[k % len], slen);
	else
	{
		hx_putnbr_base(k / len, base, slen);
		hx_putnbr_base(k % len, base, slen);
	}
}

void	ft_putaddress(unsigned long n, int *slen)
{
	ft_putstr("0x", slen);
	hx_putnbr_base(n, "0123456789abcdef", slen);
}
