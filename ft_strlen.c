/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:06:58 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/03 19:27:34 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}
