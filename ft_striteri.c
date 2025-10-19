/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:33:50 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 19:11:17 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

// void	ft_toupper_index(unsigned int n, char *t)
// {
// 	if (n % 2)
// 		*t = ft_toupper(*t);
// 	else
// 		*t = ft_tolower(*t);
// }

// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	s[] = "Hello, 42Heilbronn";

// 	ft_striteri(s, &ft_toupper_index);
// 	printf("%s\n", s);
// 	return (0);
// }
