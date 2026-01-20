/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbravo- <anbravo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:58:44 by anbravo-          #+#    #+#             */
/*   Updated: 2026/01/20 17:39:46 by anbravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);

size_t  ft_strlen(char *s);
char    *ft_strchr(char *s, int c);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_strdup(char *s1);
char    *ft_substr(char *s, unsigned int start, size_t len);

#endif