/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:58:14 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 13:58:42 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char str[] = "rgeGGHfdfFgd";
	char str2[] = "JHGKWJVDV";
	char str3[] = "LSHGH!";
	int result;
	
	result = ft_str_is_uppercase(str);
	printf("String: %s - ", str);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
	
	result = ft_str_is_uppercase(str2);
	printf("String: %s - ", str2);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
	
	result = ft_str_is_uppercase(str3);
	printf("String: %s - ", str3);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
}*/
