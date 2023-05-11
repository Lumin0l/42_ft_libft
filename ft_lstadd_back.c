/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:26:39 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/05/11 18:03:20 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;
	
	tmp = *lst;
	if (tmp)
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
		new->next = NULL;
	}
	else
	{
		new->next = NULL;
		*lst = new;
	}	
}
