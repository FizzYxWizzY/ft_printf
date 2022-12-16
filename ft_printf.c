/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:55:38 by mflury            #+#    #+#             */
/*   Updated: 2022/12/16 17:35:44 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char type)
{
	int	strlen;

	strlen = 0;
	if (type == 'c')
		strlen += ft_putchar(va_arg(args, int));
	else if (type == 's')
		strlen += ft_putstr(va_arg(args, char *));
	else if (type == 'p')
		strlen += ft_putptr
		else if (type == 'd')

	else if (type == 'i')

	else if (type == 'u')

	else if (type == 'x')
		
	else if (type == 'X')

	else if (type == '%')
		ft_putchar('%');
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
		strlen += ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	char	c1 = 'i'
	char	s1[] = "je";
	int		d1 = 3;

	ft_printf("%s m'appele M%cke, le nombre %d", s1, c1, d1);
	return (0);
}