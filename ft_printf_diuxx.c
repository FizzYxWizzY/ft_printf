/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_diuxx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 01:30:43 by mflury            #+#    #+#             */
/*   Updated: 2022/12/17 01:30:43 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_di(int n)
{
	return (0);
}

int	ft_print_u(unsigned int n)
{
	return (0);
}

static int	ft_hex(unsigned int n, char *hexset)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_hex(n / 16, hexset);
		count += ft_hex(n % 16, hexset);
	}
	else
		count += ft_print_c(hexset[n]);
	return (count);
}

int	ft_print_x(unsigned int n, const char type)
{
	char	*hexset;
	if (type == 'x')
		hexset = "0123456789abcdef";
	if (type == 'X')
		hexset = "0123456789ABCDEF";
	return (ft_hex(n, hexset));
}
