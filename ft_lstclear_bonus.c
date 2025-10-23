/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorenz <mlorenz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:07:40 by mlorenz           #+#    #+#             */
/*   Updated: 2025/10/23 20:39:08 by mlorenz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr_next;

	while (*lst)
	{
		del((*lst)->content);
		curr_next = (*lst)->next;
		free(*lst);
		*lst = curr_next;
	}
	*lst = 0;
}
