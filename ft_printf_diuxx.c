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

static int	ft_print_di()
{

}

static int	ft_print_u()
{

}

static int	ft_print_x(unsigned int n, const char type)
{
	char	*hex;
	int		count
	if (type == 'x')
	{
		hex = "0123456789abcdef";
	}
	if (type == 'X')
	{
		hex = "0123456789ABCDEF";
	}
	
}
