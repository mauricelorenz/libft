/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:11:02 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/16 14:56:43 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	size_t	nmemb = 4;
// 	size_t	size = 4;
// 	void	*ft_ptr = ft_calloc(nmemb, size);
// 	void	*st_ptr = calloc(nmemb, size);

// 	printf("ft: %p ", ft_ptr);
// 	for (int i = 0; i < 16; i++)
// 	{
// 		if (*(char *)(ft_ptr + i) == '\0')
// 			printf("\\0");
// 		else
// 			printf("%c", *(char *)(ft_ptr + i));
// 	}
// 	printf("\nst: %p ", st_ptr);
// 	for (int i = 0; i < 16; i++)
// 	{
// 		if (*(char *)(st_ptr + i) == '\0')
// 			printf("\\0");
// 		else
// 			printf("%c", *(char *)(ft_ptr + i));
// 	}
// 	printf("\n");
// }
