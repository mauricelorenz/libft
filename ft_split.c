/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:30:16 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/17 23:39:34 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcount(char const *s, char c);
static size_t	ft_dlmtr_strlen(char const *s, char c);
static void		ft_free_split(char **t_orig, size_t i);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	t_len;
	size_t	t_member_len;
	char	**t;
	char	**t_orig;
	char	*t_member_orig;

	i = 0;
	t_len = ft_strcount(s, c);
	t = malloc(sizeof(char *) * (t_len + 1));
	if (!t)
		return (0);
	t_orig = t;
	while (i < t_len)
	{
		while (*s == c)
			s++;
		j = 0;
		t_member_len = ft_dlmtr_strlen(s, c);
		if (t_member_len)
		{
			*t = malloc(t_member_len + 1);
			if (!*t)
			{
				ft_free_split(t_orig, i);
				return (0);
			}
			t_member_orig = *t;
			while (j++ < t_member_len)
			{
				**t = *s;
				(*t)++;
				s++;
			}
			**t = '\0';
			*t = t_member_orig;
			i++;
		}
		t++;
	}
	*t = 0;
	return (t_orig);
}

static size_t	ft_strcount(char const *s, char c)
{
	size_t	i;
	int		in_string;

	i = 0;
	if (!*s)
		return (0);
	if (c == '\0')
		return (1);
	while (*s)
	{
		in_string = 0;
		if (*s != c)
			in_string = 1;
		s++;
		if (*s == c && in_string)
			i++;
	}
	if (*(s - 1) != c)
		i++;
	return (i);
}

static size_t	ft_dlmtr_strlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static void	ft_free_split(char **t_orig, size_t i)
{
	size_t	free_i;
	char	**curr;

	curr = t_orig;
	free_i = 0;
	while (free_i++ < i)
	{
		free(*curr);
		*curr = 0;
		curr++;
	}
	free(t_orig);
	t_orig = 0;
}

// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	s[] = "";
// 	char	c = 'z';
// 	// printf("%li\n%li\n", ft_strcount(s, c), ft_dlmtr_strlen(s, c));
// 	char	**t = ft_split(s, c);
// 	char	**t_orig;

// 	t_orig = t;
// 	while (*t)
// 	{
// 		if (**t == '\0')
// 			printf("\\0\n");
// 		else
// 			printf("%s\n", *t);
// 		t++;
// 	}
// 	t = t_orig;
// 	while (*t)
// 	{
// 		free(*t);
// 		t++;
// 	}
// 	free(t_orig);
// 	return (0);
// }

// Result Roadmap Required variables Edgecases Test
// R: return a null-terminated array of strings split at char c
// R: create and malloc double pointer, iterate over source string s,
//    malloc length for every new string, copy new strings
// R: vars -> t (double pointer), i (iterator)
// E: empty s, empty c, failed malloc
// T: "a,b,c", ",", expect "a","b","c"