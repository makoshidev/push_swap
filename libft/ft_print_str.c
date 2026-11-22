/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 19:03:14 by mshikhov          #+#    #+#             */
/*   Updated: 2026/11/13 03:21:20 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_str(char *str)
{
	int	i;
	int	check;

	if (!str)
		return (ft_print_str("(null)"));
	i = 0;
	while (str[i])
	{
		check = ft_print_char(str[i]);
		if (check == -1)
			return (-1);
		i++;
	}
	return (i);
}
