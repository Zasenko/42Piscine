/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_lib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatis <tbatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:45:11 by tbatis            #+#    #+#             */
/*   Updated: 2024/07/28 22:42:08 by tbatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str, int leading_space)
{
	if (!str)
	{
		write(1, "Dict Error\n", 11);
		return ;
	}
	if (leading_space)
		write(1, " ", 1);
	if (*str)
	{
		write(1, str, 1);
		ft_putstr(str + 1, 0);
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;
	char			*target_pointer;

	target_pointer = dest;
	count = n;
	while (*src && count > 0)
	{
		*dest = *src;
		dest++;
		src++;
		count--;
	}
	*dest = '\0';
	return (target_pointer);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	n--;
	while (*s1 && *s1 == *s2 && n)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
