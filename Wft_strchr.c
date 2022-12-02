/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:43:15 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/02 16:57:03 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char *ft_strchr(const char *s, int c)
{
	unsigned int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (const char)c)
			return ((char *)s);
		index++;
	}
	return ((char *)s);
}