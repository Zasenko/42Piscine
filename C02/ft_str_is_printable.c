/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:01:55 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 14:02:32 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
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
	char str[] = "rgeGG=Hf dfFgd";
	char str2[] = "JHGf\neKWJVDV";
	char str3[] = "sIfj49))!@";
	int result;
	
	result = ft_str_is_printable(str);
	printf("String: %s - ", str);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
	
	result = ft_str_is_printable(str2);
	printf("String: %s - ", str2);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
	
	result = ft_str_is_printable(str3);
	printf("String: %s - ", str3);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
}*/
