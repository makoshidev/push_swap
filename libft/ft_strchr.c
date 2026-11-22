/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 01:59:23 by mshikhov          #+#    #+#             */
/*   Updated: 2026/08/10 02:12:05 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	chr;

	str = (char *)s;
	chr = (char)c;
	while (*str)
	{
		if (*str == chr)
			return (str);
		str++;
	}
	if (*str == chr)
		return (str);
	return (NULL);
}
