/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:26:53 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 22:14:03 by mlorenz          ###   ########.fr       */
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
