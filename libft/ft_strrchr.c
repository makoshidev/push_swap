/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 02:12:12 by mshikhov          #+#    #+#             */
/*   Updated: 2026/08/10 22:58:07 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	chr;
	size_t	i;

	str = (char *)s;
	chr = (char)c;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == chr)
			return (&str[i]);
		i--;
	}
	if (str[i] == chr)
		return (&str[i]);
	return (NULL);
}
