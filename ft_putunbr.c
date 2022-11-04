/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:39:30 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/11/03 18:41:56 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *slen)
{
	if (n < 10)
		ft_putchar(n + '0', slen);
	else
	{
		ft_putunbr(n / 10, slen);
		ft_putunbr(n % 10, slen);
	}
}
