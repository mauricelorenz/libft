/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:01:17 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/14 20:32:12 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "abcdefg";
// 	int		c = 'a' + 256;

// 	printf("s: %p\nr: %p\n", s, ft_strchr(s, c));
// }
