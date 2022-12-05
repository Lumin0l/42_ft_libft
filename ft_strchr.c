/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:43:15 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/05 13:29:37 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	index;
	unsigned int	len;
	char			*str_return;

	str_return = (char *)s;
	len = (ft_strlen(s));
	index = 0;
	while (index <= len)
	{
		if (str_return[index] == (char)c)
			return (&str_return[index]);
		index++;
	}
	return (NULL);
}

/* Version 2 
char *ft_strchr(const char *s, int c)
{
	char *str_return;

	str_return = (char *)s;
	while (*str_return)
	{
		if (*str_return == (char)c)
			return (str_return);
		str_return++;
	}
	return (NULL);
}
*/