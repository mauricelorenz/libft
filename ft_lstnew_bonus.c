/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:12:43 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/22 17:16:22 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_list;

	my_list = malloc(sizeof(t_list));
	if (!my_list)
		return (0);
	my_list->content = content;
	my_list->next = 0;
	return (my_list);
}
