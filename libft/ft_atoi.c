/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 10:34:11 by mshikhov          #+#    #+#             */
/*   Updated: 2026/08/11 14:48:53 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*skip_spaces(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' '
			|| str[i] == '\f'
			|| str[i] == '\n'
			|| str[i] == '\r'
			|| str[i] == '\t'
			|| str[i] == '\v')
			i++;
		else
			break ;
	}
	return (str + i);
}

int	ft_atoi(const char *str)
{
	int	r;
	int	i;
	int	sign;

	str = skip_spaces((char *)str);
	i = 0;
	sign = 1;
	r = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
			r = r * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (r * sign);
}
