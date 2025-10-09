/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:45:00 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/09 11:54:10 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i\n", ft_isprint('4'));
// 	printf("%i\n", ft_isprint('f'));
// 	printf("%i\n", ft_isprint('$'));
// 	printf("%i\n", ft_isprint('\t'));
// }
