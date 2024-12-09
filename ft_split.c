/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapora <mzapora@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:33:51 by mzapora           #+#    #+#             */
/*   Updated: 2024/12/10 00:17:58 by mzapora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_w(char const *s, char c)
{
	int	i;
	int	flag;
	
	flag = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if(*s == c)
			flag = 0;
		s++;
	}
	return (i);
}
int count_word(char *s, int c)
{
	int	i;
	int flag;

	i = 0;
	flag = 0;
	while (flag == 0)
	{
		if (*s != c && flag == 0)
		{
			flag = 1; 
			i++;
			if (i = 2)
				return ((int)s);
		}
		else if(*s == c)
			flag = 0;
		s++;
	}
}

char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char **list;
	
	j = - 1;
	if (c == 0)
		return (s);
	if (s[0] == '\0')
		return (0);
	i = count_w(s ,c);
	list = malloc(i);
	if (list == NULL)
		return (NULL);
	while (++j < i)
	{
		*list[j] = malloc(count_word(s) +i);
		while (*list[j] == NULL && j--)
		{
			free(list);
			free(*list[i]);
		}
		ft_strlcpy(*list[j], s[])
	}
}
