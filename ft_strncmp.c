/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:50:17 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/15 22:58:03 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!*s1 && !*s2) || n == 0)
		return (0);
	while (i < n && s2[i] && s1[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] -(unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
}
/*int main(void)
{
    int n = 3;
    char *s1 = "1234";
    char *s2 = "1235";
    int i = ft_strncmp(s1, s2, n);
    printf("%d", i);
    return (0);
}*/
