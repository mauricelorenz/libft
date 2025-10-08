/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:47:10 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/08 16:49:06 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i\n", ft_isascii('4'));
// 	printf("%i\n", ft_isascii('2'));
// 	printf("%i\n", ft_isascii('f'));
// 	printf("%i\n", ft_isascii(243));
// }
