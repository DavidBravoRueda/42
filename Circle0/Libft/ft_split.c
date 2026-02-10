/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:55:19 by anbravo-          #+#    #+#             */
/*   Updated: 2025/12/01 16:10:25 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;
	int	word;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c && word == 0)
		{
			count++;
			word = 1;
		}
		else if (str[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

static int	ft_words(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

static char	**ft_free(char **temp, int count)
{
	while (count >= 0)
	{
		free(temp[count]);
		count--;
	}
	free(temp);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**temp;
	int		i;
	int		j;
	int		h;

	temp = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!temp || !s)
		return (NULL);
	i = 0;
	h = 0;
	while (h < ft_count_words(s, c))
	{
		while (s[i] == c)
			i++;
		temp[h] = (char *)malloc(ft_words(s, c, i) + 1);
		if (!temp[h])
			return (ft_free(temp, h - 1));
		j = 0;
		while (s[i] && s[i] != c)
			temp[h][j++] = s[i++];
		temp[h][j] = '\0';
		h++;
	}
	temp[h] = NULL;
	return (temp);
}

/*#include <stdio.h>

int	main(void)
{
	char **r = ft_split("Hola,como,estas", ",");
	int i = 0;

	while (r[i])
	{
		printf("%s", r[i]);
		i++;
	}
	return (0);
}*/
