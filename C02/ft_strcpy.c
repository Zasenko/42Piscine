/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:42:01 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 13:42:42 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char arr[] = "Hello Dima!";
	char copy[40];
	
	printf("array: %s\n", arr);
	printf("copy array: %s\n", copy);
	
	ft_strcpy(copy,arr);

	printf("array: %s\n", arr);
	printf("copy array: %s", copy);
}*/
