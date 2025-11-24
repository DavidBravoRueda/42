/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:13:46 by anbravo-          #+#    #+#             */
/*   Updated: 2025/11/17 13:37:38 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	to_trim(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && to_trim(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	while (end > start && to_trim(s1[end - 1], set))
		end--;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	end = 0;
	while (start < end + start)
	{
		str[end] = s1[start];
		end++;
	}
	str[end] = '\0';
	return (str);
}
