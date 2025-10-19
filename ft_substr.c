/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:31:48 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 22:16:13 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t a, size_t b);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*t;
	char			*t_orig;

	i = 0;
	j = 0;
	if (!*s || ft_strlen(s) <= start)
		t = malloc(1);
	else
		t = malloc(min(ft_strlen(s) - start, len) + 1);
	if (!t)
		return (0);
	t_orig = t;
	if (*s && ft_strlen(s) > start)
	{
		while (i++ < start)
			s++;
		while (*s && j++ < len)
			*t++ = *s++;
	}
	*t = '\0';
	return (t_orig);
}

static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
