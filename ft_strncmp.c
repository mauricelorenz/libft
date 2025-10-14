/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:02:16 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/14 23:13:43 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*s1 || *s2) && (i++ < n))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[] = "";
// 	char	s2[] = "aaa";
// 	int		n = 4;
// 	char	s1[] = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char	s2[] = "\x12\x02";
// 	int		n = 6;

// 	printf("ft: %i\nst: %i\n", ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
// }
