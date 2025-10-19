/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:42:55 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 18:24:32 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*t;
	char	*t_orig;

	i = 0;
	s_len = ft_strlen(s);
	t = malloc(s_len + 1);
	if (!t)
		return (0);
	t_orig = t;
	while (*s)
	{
		*t = f(i, *s);
		t++;
		i++;
		s++;
	}
	*t = '\0';
	return (t_orig);
}

// char	ft_toupper_index(unsigned int n, char c)
// {
// 	if (n % 2)
// 		c = ft_toupper(c);
// 	else
// 		c = ft_tolower(c);
// 	return (c);
// }

// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	s[] = "Hello, 42Heilbronn";
// 	char	(*f)(unsigned int, char);

// 	f = &ft_toupper_index;
// 	printf("%s\n", ft_strmapi(s, f));
// 	return (0);
// }
