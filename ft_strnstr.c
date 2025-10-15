/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:26:53 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/15 21:29:49 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		if (*big == *little)
		{
			little++;
			i++;
		}
		else
		{
			big -= i;
			len += i;
			little -= i;
			i = 0;
		}
		big++;
		if (!*little && i)
			return ((char *)big - i);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char	big[] = "aaabcabcd";
// 	char	little[] = "abcd";
// 	size_t	len = 9;
// 	char	*ft_result = ft_strnstr(big, little, len);
// 	char	*st_result = strnstr(big, little, len);

// 	printf("ft: %p: %s\nst: %p: %s\n",
// 		ft_result, ft_result, st_result, st_result);
// }
