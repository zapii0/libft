/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:43:42 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/04 17:57:20 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *a;
	const char *b;
	size_t		i;

	i = 0;
	a = (const char *)s1;
	b = (const char *)s2;
	if (!*a && !*b)
		return (0);
	while (i < n)
	{
		if(a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
/*int main(void) 
{
    const char *s1 = "12340";
	const char *s2 = "12345";
    size_t n = 6;

    printf("%d", ft_memcmp(s1, s2, n));

    return 0;
}*/
