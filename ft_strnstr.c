/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:51:22 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/13 03:13:48 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;

	k = 0;
	j = 0;
	i = ft_strlen(little);
	if (i == 0)
		return ((char *)big);
	while (big[j] != '\0' && j + i <= len)
	{
		if (big[j] == little[0])
		{
			k = 0;
			while (k < i && big[j + k] == little[k])
				k++;
			if (k == i)
				return ((char *)big + j);
		}
		j++;
	}
	return (NULL);
}
/*int	main(void)
{
	const char *big = "aabcabcd";
	const char *little = "abcd";
	size_t		len = 9;
	char 		*result = ft_strnstr(big, little, len);
	printf("%s", result);
	return (0);
}*/
