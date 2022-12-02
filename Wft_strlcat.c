/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:49:51 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/02 15:37:25 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dst_end;
	unsigned int	index;

	dst_end = 0;
	while (dst[dst_end] != '\0')
		dst_end++;
	
	index = 0;
	if (dstsize > 0)
	{
		while (index < (dstsize - 1))
		{
			dst[dst_end] = src[index];
			dst_end++;
			index++;
		}
	}
	
	dst[dst_end] = '\0';
	return (ft_strlen(dst));	
}