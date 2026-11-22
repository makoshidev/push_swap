/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 23:24:43 by mshikhov          #+#    #+#             */
/*   Updated: 2026/08/11 00:00:46 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	total_s;

	if (n == 0 || size == 0)
		total_s = 1;
	else if (n > (size_t)-1 / size)
		return (NULL);
	else
		total_s = n * size;
	ptr = malloc(total_s);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_s);
	return (ptr);
}
