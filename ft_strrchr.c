/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:24:20 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/04 17:22:52 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + 1));
		i--;
	}
	return (0);
}

/*int main(void)
{
    char *s = "abcdabcd";
    int c = 97;
        printf("Znaleziono: %s\n", ft_strrchr(s, c));
    return 0;
}*/

