/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Uft_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:14:05 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/12 18:59:29 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}
*/

static size_t ft_start(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s[i] == set[j])
			{
				i++;
				j = 0;
			}
			else
				j++;
		}
		return (i);
	}
	return (-1);
}

static size_t ft_end(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s[i] == set[j])
			{
				i--;
				j = 0;
			}
			else
				j++;
		}
		return (i);
	}
	return (-1);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char			*new_string;
	size_t	size;
	size_t	start;
	size_t	end;
	size_t	i;

/* tocar esto
	if (!*s1)
		return (NULL);
	if (!*set)
		return ((char *)s1);
*/

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	size = ft_strlen(s1) - (start + (ft_strlen(s1) - end));
	new_string = malloc(size * (sizeof(char) + 1));
	if (!new_string)
		return(NULL);
	i = 0;
	while (start <= end)
	{
		new_string[i] = s1[start];
		start++;
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

/*
int	main(void)
{
	char const *s1 = "sinopsis";
	char const *set = "si";

	printf("New string is: %s\n", ft_strtrim(s1, set));
}
*/