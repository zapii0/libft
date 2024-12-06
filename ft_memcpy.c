/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:06:29 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/05 20:39:11 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	char *sr;
	char *ds;

	sr = (char *)src;
	ds = (char *)dest;
	i = 0;
	while (i < n)
	{
		*ds = *sr;
		i++;
		ds++;
		sr++;
	}
	return (ds);
}
