/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giorgiocarrai <giorgiocarrai@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:19:03 by giorgiocarr       #+#    #+#             */
/*   Updated: 2022/03/14 16:05:22 by giorgiocarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(48 + nb % 10);
	}
}

int	ft_nbr_len(int n)
{
	unsigned int	i;

	i = 1;
	if (n == -2147483648)
	{
		i++;
		n = n + 1;
		n *= -1;
	}
	else if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_printnbr(unsigned long long int a)
{
	unsigned int	i;

	i = ft_nbr_len(a);
	ft_putnbr(a);
	return (i);
}
