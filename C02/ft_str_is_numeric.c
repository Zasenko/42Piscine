/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:51:26 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 13:52:41 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str < '0' || *str > '9'))
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
	char str[] = "Hello3Di ma4";
	char str2[] = "534504662440";
	int result;
	
	result = ft_str_is_numeric(str);
	printf("%s, ", str);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
	
	result = ft_str_is_numeric(str2);
	printf("%s, ", str2);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
	
}*/
