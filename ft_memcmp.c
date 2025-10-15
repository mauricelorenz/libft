/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:09:19 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/15 15:26:01 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*char_s1;
	const unsigned char	*char_s2;

	char_s1 = (const unsigned char *)s1;
	char_s2 = (const unsigned char *)s2;
	i = 0;
	while (i++ < n)
	{
		if (*char_s1 != *char_s2)
			return (*char_s1 - *char_s2);
		char_s1++;
		char_s2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[] = "aaa";
// 	char	s2[] = "aab";
// 	int		n = 3;
// 	char	s1[] = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char	s2[] = "\x12\x02";
// 	int		n = 2;

// 	printf("ft: %i\nst: %i\n", ft_memcmp(s1, s2, n), memcmp(s1, s2, n));
// }
