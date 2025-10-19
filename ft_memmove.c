/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:42:57 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 22:11:03 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*char_dest;
	char	*char_src;

	i = 0;
	char_dest = (char *)dest;
	char_src = (char *)src;
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
