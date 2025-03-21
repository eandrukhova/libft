/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandrukh <eandrukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:59:13 by eandrukh          #+#    #+#             */
/*   Updated: 2025/03/16 16:33:03 by eandrukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
	#define LIBFT_H

#include <unistd.h>
	int	ft_isalpha(int c);
	int	ft_isdigit(int c);
	int	ft_isalnum(int c);
	int	ft_isascii(int c);
	int	ft_isprint(int c);
	size_t	ft_strlen(const char *s);
	void *ft_memset(void *s, int c, size_t n);
	void ft_bzero(void *s, size_t n);
	int	ft_toupper(int c);
	int	ft_tolower(int c);
	void *ft_memcpy(void *dest, void const *src, size_t n);
	char *ft_strchr(const char *s, int c);
	char	*ft_strrchr(const char *s, int c);
	void	*ft_memmove(void *dest, void const *src, size_t n);
	void	*ft_memchr(const void *s, int c, size_t n);
	int ft_memcmp(const void *s1, const void *s2, size_t n);
	int	ft_strncmp(const char *s1, const char *s2, size_t n);
	int ft_atoi(const char *nptr);
	size_t	ft_strlcpy(char *dst, const char *restrict src,	size_t sz);
	size_t	ft_strlcat(char *dst, const char *restrict src,	size_t dstsize);
#endif
