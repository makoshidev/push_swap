/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:03:19 by mshikhov          #+#    #+#             */
/*   Updated: 2026/11/13 03:21:02 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dispatch(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (spec == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (spec == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_print_num(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (spec == 'x' || spec == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), spec));
	else if (spec == '%')
		return (ft_print_char('%'));
	return (0);
}

static int	ft_parse(const char *str, va_list args)
{
	int	length;
	int	res;

	length = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (!*str)
				return (-1);
			res = ft_dispatch(*str, args);
		}
		else
			res = ft_print_char(*str);
		if (res == -1)
			return (-1);
		length += res;
		str++;
	}
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		length;

	if (!str)
		return (-1);
	va_start(args, str);
	length = ft_parse(str, args);
	va_end(args);
	return (length);
}
