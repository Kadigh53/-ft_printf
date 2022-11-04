/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:14:40 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/11/03 15:45:45 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *slen)
{
	unsigned int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (*str && (str != NULL))
	{
		ft_putchar(*str, slen);
		str++;
		i++;
	}
}
