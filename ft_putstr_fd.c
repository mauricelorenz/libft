/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:31:39 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/19 21:34:39 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// #include <stddef.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	ft_putstr_fd("42Heilbronn", 1);
// 	return (0);
// }
