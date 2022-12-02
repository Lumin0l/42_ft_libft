/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-i <ide-la-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:35:42 by ide-la-i          #+#    #+#             */
/*   Updated: 2022/12/02 16:56:56 by ide-la-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
/* #include <stdio.h> */ // Borrar

int	ft_isalpha(int c);
int	ft_isdigit (unsigned char c);
int	ft_isalnum (int c);
int	ft_isascii (int c);
int	ft_isprint (int c);
void *ft_memset (void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove (void *dest, const void *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlen(const char *str);
int ft_toupper(int ch);
int ft_tolower(int ch);
char *ft_strchr(const char *s, int c);

#endif
