/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:41:46 by marvin            #+#    #+#             */
/*   Updated: 2022/12/01 16:41:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove (void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*temp;
	unsigned int	index;

	temp = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	index = 0;
	while (index < n)
	{
		p_dest[index] = temp[index];
		index++;
	}
	return (dest);
}