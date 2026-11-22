/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:03:11 by mshikhov          #+#    #+#             */
/*   Updated: 2026/11/13 03:18:36 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hex(unsigned int num, char format)
{
	char	buffer[12];
	int		i;
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	buffer[11] = '\0';
	i = 10;
	while (num > 15)
	{
		buffer[i--] = base[num % 16];
		num = num / 16;
	}
	buffer[i] = base[num];
	return (ft_print_str(&buffer[i]));
}
