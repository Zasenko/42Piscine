/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:36:11 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/23 15:35:16 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] != '\0' && str[i + f] == to_find[f])
		{
			f++;
			if (to_find[f] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char a[] = "Hello, wor d woeld! worddld ffdfff";
	char b[] = "!";
	char *p;
	p = ft_strstr(a, b);
	printf("%s\n", p);
}*/
