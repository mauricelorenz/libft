/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:59:52 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/15 22:55:48 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c);

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		sign *= -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		i = i * 10 + *nptr - '0';
		nptr++;
	}
	return (i * sign);
}

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v');
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	nptr[] = "     -123a456";

// 	printf("ft: %i\nst: %i\n", ft_atoi(nptr), atoi(nptr));
// }
