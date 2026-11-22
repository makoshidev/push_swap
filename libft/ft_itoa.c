/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:41:40 by mshikhov          #+#    #+#             */
/*   Updated: 2026/08/11 20:50:26 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long n)
{
	size_t	numlen;

	numlen = 0;
	if (n <= 0)
		numlen++;
	while (n != 0)
	{
		n /= 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	size_t	numlen;
	char	*str;
	long	num;

	num = (long)n;
	numlen = ft_numlen(num);
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	str[numlen] = '\0';
	while (num > 9)
	{
		str[--numlen] = num % 10 + '0';
		num /= 10;
	}
	str[--numlen] = num % 10 + '0';
	return (str);
}
