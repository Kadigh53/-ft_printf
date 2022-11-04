/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:14:22 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/11/03 15:43:42 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nbr, char *base, int *slen)
{
	if (nbr < 16)
		ft_putchar(base[nbr % 16], slen);
	else
	{
		ft_putnbr_base(nbr / 16, base, slen);
		ft_putnbr_base(nbr % 16, base, slen);
	}
}
