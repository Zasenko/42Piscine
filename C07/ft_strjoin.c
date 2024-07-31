/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:45:59 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/30 12:46:01 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strcount(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	make(int size, char *dest, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	dest[0] = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		i;
	int		size_fool;
	int		size_sep;

	i = 0;
	size_fool = 0;
	size_sep = ft_strcount(sep);
	if (size == 0)
	{
		p = malloc(sizeof(char));
		p[0] = '\0';
		return (p);
	}
	while (i < size)
	{
		size_fool += ft_strcount(strs[i]);
		if (i < size - 1)
			size_fool += size_sep;
		i++;
	}
	p = malloc(size_fool * sizeof(char) + 1);
	make(size, p, strs, sep);
	return (p);
}
/*
int	main(void)
{
	char *test[] = {"11111", "22222", "33333"};
	int size = 3;
	char sep[] = "dima!";
	char *p;
	
	p = ft_strjoin(size, test, sep);
	if (p == 0)
		return (1);
	printf("%s", p);
	free(p);
}*/
