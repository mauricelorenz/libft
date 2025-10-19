/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:49:47 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 22:15:47 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	startlen(char const *s1, char const *set);
static size_t	endlen(char const *s1, char const *set);
static int		is_in_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		s2_len;
	char		*s2;
	char		*s2_orig;

	i = 0;
	if (ft_strlen(s1) < (startlen(s1, set) + endlen(s1, set)))
		s2_len = 0;
	else
		s2_len = ft_strlen(s1) - (startlen(s1, set) + endlen(s1, set));
	s2 = malloc(s2_len + 1);
	if (!s2)
		return (0);
	s2_orig = s2;
	s1 += startlen(s1, set);
	while (i++ < s2_len)
		*s2++ = *s1++;
	*s2 = '\0';
	return (s2_orig);
}

static size_t	startlen(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (*s1)
	{
		if (is_in_set(*s1, set))
		{
			s1++;
			i++;
		}
		else
			break ;
	}
	return (i);
}

static size_t	endlen(char const *s1, char const *set)
{
	size_t		i;
	char const	*s1_orig;

	i = 0;
	s1_orig = s1;
	while (*s1)
		s1++;
	s1--;
	while (s1 >= s1_orig)
	{
		if (is_in_set(*s1, set))
		{
			s1--;
			i++;
		}
		else
			break ;
	}
	return (i);
}

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
