/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giorgiocarrai <giorgiocarrai@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:14:08 by giorgiocarr       #+#    #+#             */
/*   Updated: 2022/03/16 21:24:18 by giorgiocarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flags(const char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long long)));
	else if (type == 'd' || type == 'i')
		return (ft_printnbr(va_arg(args, int)));
	else if (type == 'u')
		return (ft_print_u_nbr(va_arg(args, unsigned int)));
	else if (type == 'x' || type == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), type));
	else if (type == '%')
		ft_putchar('%');
	return (1);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		x;
	va_list	args;

	i = 0;
	x = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			x += flags(s[i], args);
			i++;
		}
		if (!s[i])
			return (x);
		if (s[i] != '%')
		{
			x++;
			ft_putchar(s[i]);
			i++;
		}
	}
	return (x);
}
