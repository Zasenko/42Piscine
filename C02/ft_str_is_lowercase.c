/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:54:36 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 13:56:06 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
	char str2[] = "tsgsgdswh";
	char str3[] = "tsgsgd$ef";
	int result;
	
	result = ft_str_is_lowercase(str);
	printf("String: %s - ", str);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
	
	result = ft_str_is_lowercase(str2);
	printf("String: %s - ", str2);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
	
	result = ft_str_is_lowercase(str3);
	printf("String: %s - ", str3);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
}*/
