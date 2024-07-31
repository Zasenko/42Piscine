/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <dzasenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:57:48 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/30 10:04:48 by dzasenko         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*p;

	len = ft_strcount(src);
	p = malloc(len * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	return (ft_strcpy(p, src));
}
/*
int	main(int argc, char **argv)
{
	char *p;

	if (argc > 1)
	{
		p = ft_strdup(argv[1]);
		if (p == NULL)
			return (1);
		printf("%s", p);
		free(p);
	}
}*/
