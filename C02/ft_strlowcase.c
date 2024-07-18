/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:34:13 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 14:34:29 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "rgeGGHfdfFgd";
	char str2[] = "JHGK eewr KK!#wef";
	char str3[] = "LSHGH! ewf Fjhvj Jhfdj";

	
	printf("OLD String: %s\n", str);
	ft_strlowcase(str);
	printf("NEW string: %s\n", str);
	
	printf("----------------\n");

	printf("OLD String: %s\n", str2);
	ft_strlowcase(str2);
	printf("NEW string: %s\n", str2);
	
	printf("----------------\n");
	
	printf("OLD String: %s\n", str3);
	ft_strlowcase(str3);
	printf("NEW string: %s\n", str3);
}*/
