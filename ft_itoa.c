/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:55:22 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/13 02:56:54 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*memaloc(int j)
{
	char	*str;

	str = (char *)malloc(j + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

static unsigned int	len(int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i += 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int		j;
	unsigned int		num;
	char				*result;

	j = len(n);
	result = memaloc(j);
	result[j] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		num = (unsigned int)(-n);
		result[0] = '-';
	}
	else
		num = (unsigned int)n;
	while (num)
	{
		result[--j] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
/*int	main(void)
{
	int	i;
	char *result;
	
	i = 2147483648;
	result = ft_itoa(i);
	printf("%s", result);
	return (0);
}*/
