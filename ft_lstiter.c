/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:26:31 by ide-la-i          #+#    #+#             */
/*   Updated: 2023/05/15 19:45:20 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// No entiendo - me voy
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;

	if (!lst)
		return ;
	next = lst;
	while (next != NULL)
	{
		next = lst->next;
		f(lst);
		lst = next;
	}
	f(lst);
	
}