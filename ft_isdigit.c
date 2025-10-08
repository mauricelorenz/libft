/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:39:20 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/08 16:41:09 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i\n", ft_isdigit('4'));
// 	printf("%i\n", ft_isdigit('2'));
// 	printf("%i\n", ft_isdigit('f'));
// 	printf("%i\n", ft_isdigit('$'));
// }
