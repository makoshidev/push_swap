/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:03:17 by mshikhov          #+#    #+#             */
/*   Updated: 2026/11/13 03:18:29 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long	value;
	int				i;
	char			*base;
	char			buffer[20];

	if (ptr == NULL)
		return (ft_print_str("(nil)"));
	base = "0123456789abcdef";
	buffer[19] = '\0';
	i = 18;
	value = (unsigned long)ptr;
	while (value > 15)
	{
		buffer[i--] = base[value % 16];
		value >>= 4;
	}
	buffer[i--] = base[value];
	buffer[i--] = 'x';
	buffer[i] = '0';
	return (ft_print_str(&buffer[i]));
}
