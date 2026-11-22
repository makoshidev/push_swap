/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:03:15 by mshikhov          #+#    #+#             */
/*   Updated: 2026/11/13 03:18:25 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned(unsigned int num)
{
	char	buffer[12];
	int		i;

	buffer[11] = '\0';
	i = 10;
	while (num > 9)
	{
		buffer[i--] = (num % 10) + '0';
		num = num / 10;
	}
	buffer[i] = num + '0';
	return (ft_print_str(&buffer[i]));
}
