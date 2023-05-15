/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:00:11 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/05/15 16:03:53 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	index;

	if (!lst)
		return (0);
	if (lst->next == NULL)
		return (1);
	index = 1;
	while (lst->next != NULL)
	{
		lst = lst-> next;
		index++;
	}
	return (index);
}
