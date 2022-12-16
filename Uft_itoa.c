/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Uft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:25:12 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/16 13:25:40 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>


static char	*ft_pos(int n)
{
	int		index;
	int		size_offset;
	char	*string;
	
	index = 1;
	size_offset = 1;
	while (index * 10 <= n)
	{
		index = index * 10;
		size_offset++;
	}
	string = malloc((size_offset + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[size_offset] = '\0';
	size_offset--;
	index = 0;
	while (n >= 0 && size_offset >= 0)
	{
		string[size_offset] = (n % 10) + '0';
		n = n / 10;
		size_offset--;
	}
	return (string);
}

static char	*ft_neg(int n)
{
	int		index;
	int		size_offset;
	char	*string;

	n *= -1;
	index = 1;
	size_offset = 1;
	while (index * 10 <= n)
	{
		index = index * 10;
		size_offset++;
	}
	string = (char *)malloc((size_offset + 2) * sizeof(char));
	if (!string)
		return (NULL);

	string[size_offset] = '\0';
	index = 0;
	while (n >= 0 && size_offset > 0)
	{
		string[size_offset] = (n % 10) + '0';
		n = n / 10;
		size_offset--;
	}
	string[size_offset] = '-';
	return (string);
}

char	*ft_itoa(int n)
{
	char	*string;

	if (n < 0)
		string = ft_neg(n);
	if (n >= 0)
		string = ft_pos(n);
	return (string);
}


// int main(void)
// {
// 	char *res = ft_itoa(-9);
// 	printf("%s\n", res);
// 	free (res);
// }
