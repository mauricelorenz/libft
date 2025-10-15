/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:55:03 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/15 12:44:45 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*char_s;

	i = 0;
	char_s = (const unsigned char *)s;
	while (i++ < n)
	{
		if (*char_s == (unsigned char)c)
			return ((void *)char_s);
		char_s++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[] = {0, 1, 2, 3, 4, 5};
// 	int		c = 2 + 256;
// 	size_t	n = 3;

// 	printf("s:  %p\nft: %p\nst: %p\n", s, ft_memchr(s, c, n), memchr(s, c, n));
// }
