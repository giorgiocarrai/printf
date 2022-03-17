/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giorgiocarrai <giorgiocarrai@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:12:27 by giorgiocarr       #+#    #+#             */
/*   Updated: 2022/03/14 17:24:22 by giorgiocarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_putptr(nb / 16);
		ft_putptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'a');
	}
}

int	ft_ptr_len(unsigned long long n)
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

int	ft_print_ptr(unsigned long long nb)
{
	int		i;

	i = 0;
	write(1, "0x", 2);
	if (nb == 0)
		return (write(1, "0", 1) + 2);
	else
		ft_putptr(nb);
	return (ft_ptr_len(nb) + 2);
}
