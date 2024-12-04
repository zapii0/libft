/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:33:20 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/04 16:44:12 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	int	flag;
	
	i = 0;
	flag = 0;
	if (dest < src)
		flag = 1;
	if (flag == 0)
	{
		while (n > 0)
		{
			((char *)dest)[n] = ((char *)src)[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[n] = ((char *)src)[n];
			i++;
		}
	}
	return (dest);
}
