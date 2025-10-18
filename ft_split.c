/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:30:16 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/18 22:43:21 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	word_len;
	char	**t;
	char	**t_orig;

	t = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!t)
		return (0);
	t_orig = t;
	while (*s)
	{
		word_len = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			word_len++;
			s++;
		}
		if (!word_len)
			continue ;
		*t = malloc(word_len + 1);
		if (!*t)
		{
			while (t >= t_orig)
			{
				free(*t);
				t--;
			}
			free(t_orig);
			return (0);
		}
		s -= word_len;
		while (*s && *s != c)
		{
			**t = *s;
			(*t)++;
			s++;
		}
		**t = '\0';
		*t -= word_len;
		t++;
	}
	*t = 0;
	return (t_orig);
}

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!s)
		return (0);
	if (!c)
		return (1);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	s[] = "\t\t\t\thello\t\t\t\t";
// 	char	c = '\t';
// 	char	**t = ft_split(s, c);
// 	char	**t_orig;

// 	printf("%li\n", ft_word_count(s, c));
// 	printf("%s\n%s\n%s\n", *t, *(t + 1), *(t + 2));
// 	t_orig = t;
// 	while (*t)
// 	{
// 		free(*t);
// 		t++;
// 	}
// 	free(t_orig);
// 	return (0);
// }
