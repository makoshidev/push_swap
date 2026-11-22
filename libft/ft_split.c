/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 22:05:28 by mshikhov          #+#    #+#             */
/*   Updated: 2026/08/11 23:24:54 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (s[i] == '\0')
		return (0);
	else if (s[i] != c)
		count += 1;
	while (s[++i])
	{
		if (s[i] != c && s[i - 1] == c)
			count += 1;
	}
	return (count);
}

static size_t	count_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_all(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	malloc_words(char **array, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		len = count_len(&s[i], c);
		array[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (array[j] == NULL)
		{
			free_all(array, j);
			return (0);
		}
		ft_strlcpy(array[j++], &s[i], len + 1);
		i += len;
	}
	array[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (array == NULL)
		return (NULL);
	if (!malloc_words(array, s, c))
		return (NULL);
	return (array);
}
