/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:26:59 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/13 02:58:12 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*s;

	i = 0;
	s = (const char *)str;
	while (n--)
	{
		if ((s[i]) == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
