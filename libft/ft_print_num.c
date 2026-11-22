/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:03:12 by mshikhov          #+#    #+#             */
/*   Updated: 2026/11/13 03:18:33 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_num(int num)
{
	char	buffer[13];
	int		i;
	int		sign;

	buffer[12] = '\0';
	i = 11;
	sign = 1;
	if (num < 0)
		sign = -1;
	while (num > 9 || num < -9)
	{
		buffer[i--] = ((num % 10) * sign) + '0';
		num = num / 10;
	}
	buffer[i] = (num * sign) + '0';
	if (sign == -1)
		buffer[--i] = '-';
	return (ft_print_str(&buffer[i]));
}
