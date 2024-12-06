/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:06:48 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/05 21:06:37 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_strlen(const char *s);
int		*ft_memset(void *s, char c, int n);
void	ft_bzero(void *s, size_t n);
int		ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strnstr(const char *big,	const char *little, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
void	*ft_memmove(void *dest, const void *src, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *nptr);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif