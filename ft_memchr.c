/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:26:59 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/04 17:42:46 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	const char *	s;
	s = (const char *)str;
	while (i < n)
	{
		if ((s[i]) == (char)c)
			return ((char *)str + 1);
		i++;
	}
	return (NULL);
}
/*int main() {
    const char *str = "Hello, world!";
    char c = 'o';
    size_t n = 13;  // Długość ciągu

    // Wyszukujemy pierwsze wystąpienie 'o' w łańcuchu
    void *result = memchr(str, c, n);

    if (result != NULL) {
        printf("Znaleziono '%c' w adresie: %p\n", c, result);
    } else {
        printf("Nie znaleziono '%c' w pierwszych %zu bajtach.\n", c, n);
    }

    return 0;
}*/