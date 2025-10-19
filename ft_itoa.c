/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:00:25 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 22:10:05 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nlen(int n);
static void		copyn(int n, char *str_n, size_t len_n);

char	*ft_itoa(int n)
{
	size_t	len_n;
	char	*str_n;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len_n = nlen(n);
	str_n = malloc(len_n + 1);
	if (!str_n)
		return (0);
	copyn(n, str_n, len_n);
	return (str_n);
}

static size_t	nlen(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	copyn(int n, char *str_n, size_t len_n)
{
	if (n < 0)
	{
		*str_n = '-';
		n = (-n);
	}
	str_n += len_n;
	*str_n = '\0';
	while (n)
	{
		str_n--;
		*str_n = n % 10 + '0';
		n /= 10;
	}
}
