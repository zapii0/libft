/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 22:50:17 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/04 17:12:35 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	i;

    i = 0;
    if ((!*s1 && !*s2) || n == 0)
        return (0);
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}
/*int main(void)
{
    int n = 8;
    char *s1 = "123456";
    char *s2 = "1234500";
    int i = ft_strncmp(s1, s2, n);
    printf("%d", i);
    return (0);
}*/

