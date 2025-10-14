/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:11:53 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/14 14:01:53 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (!size)
		return (len);
	while (*src && i < size - 1)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	const char	src[] = "42Heilbronn";
// 	char		ft_dst[20];
// 	char		st_dst[20];
// 	int			ft_return = ft_strlcpy(ft_dst, src, 10);
// 	int			st_return = strlcpy(st_dst, src, 10);

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
