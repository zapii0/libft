/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:51:22 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/04 22:59:14 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		l;

	i = 0;
	k = 0;
	j = 0;
	while (little[i])
		i++;
	while (big[j] != '\0' && j + i < len)
	{
		if (big[j] == little[0])
		{
			k = 0;
			while (big[j + k] == little[k] && j + k < len)
			{
				k++;
				if (k == i)
					return ((char *)big + j);
			}
		}
		j++;
	}
	return (NULL);
}
/*int	main(void)
{
	const char *big = "12123dsadasd1215abcd1231312123";
	const char *little = "abcd";
	size_t		len = 25;
	char 		*result = ft_strnstr(big, little, len);
	printf("%s", result);
	return (0);
}*/
