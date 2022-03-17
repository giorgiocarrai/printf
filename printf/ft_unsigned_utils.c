/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giorgiocarrai <giorgiocarrai@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:14:36 by giorgiocarr       #+#    #+#             */
/*   Updated: 2022/03/14 16:05:16 by giorgiocarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_u_nbr(unsigned int nb)
{
	if (nb < 0)
	{
		nb = (4294967295 + nb);
		ft_put_u_nbr(nb);
	}
	else if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_put_u_nbr(nb / 10);
		ft_put_u_nbr(nb % 10);
	}
}

int	ft_u_nbr_len(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_print_u_nbr(unsigned int a)
{
	unsigned int	i;

	i = ft_u_nbr_len(a);
	ft_put_u_nbr(a);
	return (i);
}
