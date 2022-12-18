/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:55:38 by mflury            #+#    #+#             */
/*   Updated: 2022/12/18 23:43:10 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char type)
{
	int	strlen;

	strlen = 0;
	if (type == 'c')
		strlen += ft_print_c(va_arg(args, int));
	else if (type == 's')
		strlen += ft_print_s(va_arg(args, char *));
	else if (type == 'p')
		strlen += ft_print_p(va_arg(args, unsigned long long));
	else if (type == ('d' || 'i'))
		strlen += ft_print_di(va_arg(args, int));
	else if (type == 'u')
		strlen += ft_print_u(va_arg(args, unsigned int));
	else if (type == ('x' || 'X'))
		strlen += ft_print_x(va_arg(args, unsigned int), type);
	else if (type == '%')
		ft_print_c('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		strlen;

	i = 0;
	strlen = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			strlen += ft_format(args, str[i + 1]);
			i++;
		}
		else
		strlen += ft_print_c(str[i]);
		i++;
	}
	va_end(args);
	return (strlen);
}
/*
int	main()
{
	char	c1 = 'i';
	char	s1[] = "je";
	int		d1 = 3;

	ft_printf("%s m'appel M%cke, le nombre %d", s1, c1, d1);
	return (0);
}
*/
