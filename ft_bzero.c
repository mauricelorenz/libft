/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:42:17 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/15 11:18:09 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*char_s;

	i = 0;
	char_s = (char *)s;
	while (i++ < n)
		*char_s++ = 0;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "42Heilbronn";

// 	ft_bzero(s, 5);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (s[i])
// 			printf("%c\n", s[i]);
// 		else
// 			printf("NULL\n");
// 	}
// }
