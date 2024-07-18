/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:21:59 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 17:18:32 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	i;

	i = 0;
	src_size = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}
/*
int main(void)
{
	
	char buf[10];
	char str[] = "dima+dima+dima";
	
	printf("----------------\n");
	printf("String: %s\n", str);
	printf("Buffer: %s\n", buf);
	printf("----------------\n");
	ft_strlcpy(buf, str, 10);
	
	printf("----------------\n");
	printf("String: %s\n", str);
	printf("Buffer: %s\n", buf);
}*/
