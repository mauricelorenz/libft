/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:42:57 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/13 19:55:16 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*char_dest;
	char	*char_src;

	i = 0;
	char_dest = (char *) dest;
	char_src = (char *) src;
	if (src == dest)
		return (dest);
	else if (src > dest)
		while (i++ < n)
			*char_dest++ = *char_src++;
	else
		while (i++ < n)
			*((--char_dest) + n) = *((--char_src) + n);
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[] = "1234567890";
// 	char	t[] = "1234567890";
// 	char	u[] = "1234567890";
// 	char	v[] = "1234567890";

// 	ft_memmove(s + 4, s + 3, 3);
// 	memmove(t + 4, t + 3, 3);
// 	ft_memmove(u + 3, u + 4, 3);
// 	memmove(v + 3, v + 4, 3);

// 	printf("ft: %s\nst: %s\nft: %s\nst: %s\n", s, t, u, v);
// }
