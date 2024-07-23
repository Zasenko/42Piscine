/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:33:32 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/23 15:40:38 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_lenght;
	unsigned int	src_lenght;
	unsigned int	dest_i;
	unsigned int	src_i;

	dest_lenght = ft_strlen(dest);
	src_lenght = ft_strlen(src);
	dest_i = 0;
	src_i = 0;
	if (size <= dest_lenght)
		return (size + src_lenght);
	while (dest[dest_i] && dest_i < size - 1)
		dest_i++;
	while (src[src_i] && dest_i < size - 1)
	{
		dest[dest_i] = src[src_i];
		src_i++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return (dest_lenght + src_lenght);
}

int	main(void)
{
	
	char a[13] = "Hello,";
	char b[7] = "world!";
	
	ft_strlcat(a, b, 13);
	printf("%s\n", a);
}