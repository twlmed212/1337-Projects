/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:52:34 by mtawil            #+#    #+#             */
/*   Updated: 2024/12/01 01:59:40 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_strchr(const char *s, int c);
char *get_next_line(int fd, int i);
int check_line_complated(char *buffer);
size_t	ft_strlen(const char *s);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strdup(char *s);
char	*ft_strjoin(char *s1, char *s2);
#endif
