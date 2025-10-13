/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:52:44 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/13 19:17:12 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*char_dest;
	char	*char_src;

	i = 0;
	char_dest = (char *) dest;
	char_src = (char *) src;
	if (!dest && !src)
		return (0);
	while (i++ < n)
		*char_dest++ = *char_src++;
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "42Heilbronn";
// 	char	t[20];

// 	ft_memcpy(t, s, 5);
// 	printf("%s\n", t);
// }
