/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:39:53 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/14 22:06:17 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*s)
		s++;
	if ((unsigned char)c == '\0')
		return ((char *)s);
	while (s >= ptr)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "abcdefgabcdefg";
// 	int		c = 'a';
// 	char	*r = ft_strrchr(s, c);

// 	printf("s: %p\nr: %p\nd: %li\n", s, r, r - s);
// }
