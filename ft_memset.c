/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:56:46 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/15 11:19:29 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*char_s;

	i = 0;
	char_s = (char *)s;
	while (i++ < n)
		*char_s++ = c;
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "42Heilbronn";
// 	char	*result = ft_memset(s, 'x', 5);

// 	printf("%s\n", result);
// }
