/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:40:38 by aaoutem-          #+#    #+#             */
/*   Updated: 2022/11/04 15:26:59 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char c, int *slen);
void	ft_putnbr(int n, int *slen);
void	ft_putunbr(unsigned int n, int *slen);
void	ft_putstr(char *str, int *slen);
void	ft_putnbr_base(unsigned int nbr, char *base, int *slen);
void	ft_putaddress(unsigned long n, int *slen);

#endif
