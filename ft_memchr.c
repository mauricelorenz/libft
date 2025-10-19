/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:55:03 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 22:10:20 by mlorenz          ###   ########.fr       */
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
