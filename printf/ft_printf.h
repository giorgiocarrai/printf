/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giorgiocarrai <giorgiocarrai@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:45:02 by giorgiocarr       #+#    #+#             */
/*   Updated: 2022/03/14 18:10:36 by giorgiocarr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		flags(const char type, va_list args);

int		ft_putchar(char c);
int		ft_putstr(char *s);

void	ft_putnbr(int nb);
int		ft_nbr_len(int n);
int		ft_printnbr(unsigned long long int a);

void	ft_put_u_nbr(unsigned int nb);
int		ft_u_nbr_len(unsigned int n);
int		ft_print_u_nbr(unsigned int a);

void	ft_puthex(unsigned int n, const char s);
int		ft_hex_len(unsigned long n);
int		ft_print_hex(unsigned int n, const char s);

void	ft_putptr(unsigned long long nb);
int		ft_ptr_len(unsigned long long n);
int		ft_print_ptr(unsigned long long nb);

#endif