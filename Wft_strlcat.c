/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:49:51 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/05 17:25:59 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	offset;
	size_t	index;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	offset = d_len;
	index = 0;
	if (!src || dstsize < 1)
		return (d_len + s_len);
	while(src[index] != '\0' && (index + offset) < (dstsize -1))
	{
		dst[index + offset] = src[index];
		index++;
	}
	dst[index + offset] = '\0';
	return (d_len + s_len);
}


/*
{
	size_t			dst_end;
	unsigned int	index;

	dst_end = ft_strlen(dst);
	index = 0;
	if (dstsize < 1 || !src)
		return (ft_strlen(src));
	while (src[index] != '\0' && index < (dst_end - dstsize - 1))
	{
		dst[index + dst_end] = src[index];
		index++;
	}
	dst[dst_end] = '\0';
	return (ft_strlen(dst));
}
*/