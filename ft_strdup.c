/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:00:27 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/16 17:55:47 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*t;
	char	*t_orig;

	t = malloc(ft_strlen(s) + 1);
	if (!t)
		return (0);
	t_orig = t;
	while (*s)
		*t++ = *s++;
	*t = '\0';
	return (t_orig);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[] = "42Heilbronn";
// 	char	*t = ft_strdup(s);
// 	char	*u = strdup(s);

// 	printf("or: %s\nft: %s\nst: %s\n", s, t, u);
// }
