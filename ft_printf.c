/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:36:47 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/11/04 15:25:46 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_wformat(va_list ptr, const char *s, int i, int *slen)
{
	if (s[i + 1] == '%')
		ft_putchar('%', slen);
	else if (s[i + 1] == 'c')
		ft_putchar(va_arg(ptr, int), slen);
	else if (s[i + 1] == 's')
		ft_putstr(va_arg(ptr, char *), slen);
	else if (s[i + 1] == 'p')
		ft_putaddress(va_arg(ptr, unsigned long), slen);
	else if (s[i + 1] == 'd' || s[i + 1] == 'i')
		ft_putnbr(va_arg(ptr, int), slen);
	else if (s[i + 1] == 'u')
		ft_putunbr(va_arg(ptr, unsigned int), slen);
	else if (s[i + 1] == 'x')
		ft_putnbr_base(va_arg(ptr, int), "0123456789abcdef", slen);
	else if (s[i + 1] == 'X')
		ft_putnbr_base(va_arg(ptr, int), "0123456789ABCDEF", slen);
	else
		ft_putchar(s[i + 1], slen);
}

int	ft_printf(const char *s, ...)
{
	unsigned int	i;
	int				*slen;
	int				a;
	va_list			ptr;

	i = 0;
	a = 0;
	slen = &a;
	va_start(ptr, s);
	while (s[i] && s)
	{
		if (s[i] == '%' && s[i + 1] == '\0')
			break ;
		if (s[i] != '%')
			ft_putchar(s[i], slen);
		else if (s[i] == '%')
		{
			print_wformat(ptr, s, i, slen);
			i++;
		}
		i++;
	}
	va_end(ptr);
	return (*slen);
}
