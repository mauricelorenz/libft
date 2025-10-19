/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:00:27 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 22:13:11 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*t;
	char	*t_orig;

	t = malloc(ft_strlen(s) + 1);
	if (!t)
		return (0);
	t_orig = t;
	while (*s)
		*t++ = *s++;
	*t = '\0';
	return (t_orig);
}
