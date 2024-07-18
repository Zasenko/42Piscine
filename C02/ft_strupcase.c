/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:31:25 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 14:31:54 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
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
	ft_strupcase(str);
	printf("NEW string: %s\n", str);
	
	printf("----------------\n");

	printf("OLD String: %s\n", str2);
	ft_strupcase(str2);
	printf("NEW string: %s\n", str2);
	
	printf("----------------\n");
	
	printf("OLD String: %s\n", str3);
	ft_strupcase(str3);
	printf("NEW string: %s\n", str3);
}*/
