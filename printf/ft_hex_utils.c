/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giorgiocarrai <giorgiocarrai@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:07:18 by giorgiocarr       #+#    #+#             */
/*   Updated: 2022/03/14 16:30:32 by giorgiocarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, const char s)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, s);
		ft_puthex(n % 16, s);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
		{
			if (s == 'x')
				ft_putchar(n - 10 + 'a');
			if (s == 'X')
				ft_putchar(n - 10 + 'A');
		}
	}
}

int	ft_hex_len(unsigned long n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_print_hex(unsigned int n, const char s)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(n, s);
	return (ft_hex_len(n));
}
