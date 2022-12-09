/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:47:17 by marvin            #+#    #+#             */
/*   Updated: 2022/12/07 17:47:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	index;

	if (!little)
		return ((char *)big);
	index = 0;
	while (big[index] != '\0')
	{
		if (ft_strncmp(big + index, little, len) != 0)
			index++;
		else
			return ((char *)big + index);
	}
	return (NULL);
}
