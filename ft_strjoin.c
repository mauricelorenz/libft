/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:44:40 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/16 18:54:48 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	*s3_orig;

	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (0);
	s3_orig = s3;
	while (*s1)
		*s3++ = *s1++;
	while (*s2)
		*s3++ = *s2++;
	*s3 = '\0';
	return (s3_orig);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "Hello, ";
// 	char	s2[] = "42Heilbronn";

// 	printf("%s + %s = %s\n", s1, s2, ft_strjoin(s1, s2));
// }
