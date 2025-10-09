/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:42:17 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/09 17:45:59 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*char_ptr;

	i = 0;
	char_ptr = (char *) s;
	while (i++ < n)
		*char_ptr++ = 0;
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
