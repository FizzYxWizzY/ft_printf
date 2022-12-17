/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_csp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 02:13:48 by mflury            #+#    #+#             */
/*   Updated: 2022/12/17 02:13:48 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_c(char c)
{
	write(1, &c, 1);
	return (1);
}

static int ft_print_s(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_print_c(str[i++]);
	}
	return (i);
}

static int ft_print_p()
{

}
