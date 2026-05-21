/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:26:55 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/21 11:40:27 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*dup_char;

	src_len = ft_strlen(src);
	i = 0;
	dup_char = (char *) malloc(sizeof(char) * (src_len + 1));
	if (!dup_char)
		return (NULL);
	while (i < src_len)
	{
		dup_char[i] = src[i];
		i++;
	}
	dup_char[i] = '\0';
	return (dup_char);
}
