/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:06:48 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/03 19:27:29 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isascii(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);
int	ft_strlen(const char *s);
int	*ft_memset(void *s, char c, int n);
void ft_bzero(void *s, size_t n);
int	ft_strlcpy(char *dst, const char *src, size_t size);
int	ft_strlcat(char *dst, const char *src, size_t size);
int toupper(int c);
int tolower(int c);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
#endif