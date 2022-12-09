/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:46:33 by marvin            #+#    #+#             */
/*   Updated: 2022/12/07 12:46:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (p_s1[index] != p_s2[index])
			return (p_s1[index] - p_s2[index]);
		else
			index++;
	}
	return (0);
}

/* 
int main() {
  char str1[] = "Hello, world!";
  char str2[] = "Hello, universe!";

  int result = ft_strncmp(str1, str2, 20);

  printf("result = %d\n", result);
}
*/