/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:19:29 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 21:28:31 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	ft_putchar_fd('A', 1);
// 	ft_putchar_fd('B', 2);
// 	return (0);
// }
