/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:48:48 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 13:50:13 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
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
	char str[] = "Hello Dima!";
	char str2[] = "HelloDima";
	int result;
	
	result = ft_str_is_alpha(str);
	printf("%s, ", str);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
	
	result = ft_str_is_alpha(str2);
	printf("%s, ", str2);
	
	if (result == 0) printf("FALSE\n");
	else printf("TRUE\n");
}*/
