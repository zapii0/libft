/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:32:40 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/05 20:44:46 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	size_t	i;

	i = 0;
	dest = malloc(len);
	while (s[i] && i < len)
	{
		dest[i] = s[i + start - 1];
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	char const *s = "0123456789";
	unsigned int start = 5;
	size_t len = 5;
	char *result;
	result = ft_substr(s, start, len);
	printf("%s", result);
	return (0);
}*/

