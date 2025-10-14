/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:56:59 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/14 19:32:41 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (src_len + size);
	while (*dst)
		dst++;
	while (*src && i < size - dst_len - 1)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (src_len + dst_len);
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	const char	src[] = "42Heilbronn";
// 	char		ft_dst[30] = "Hello, ";
// 	char		st_dst[30] = "Hello, ";
// 	int			ft_return = ft_strlcat(ft_dst, src, 20);
// 	int			st_return = strlcat(st_dst, src, 20);
// 	printf("src:    %s\nft_dst: %s\nst_dst: %s\nft_return: %i\nst_return: %i\n",
// 		src, ft_dst, st_dst, ft_return, st_return);
// }

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*s++)
// 		i++;
// 	return (i);
// }
