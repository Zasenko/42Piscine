/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:21:59 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 15:23:03 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	check_first(char *c, int *is_first)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
		*is_first = 0;
	}
	else if ((*c >= 'A' && *c <= 'Z') || (*c >= '0' && *c <= '9'))
		*is_first = 0;
	else
		*is_first = 1;
}

void	check_other(char *c, int *is_first)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
	else if ((*c >= 'a' && *c <= 'z') || (*c >= '0' && *c <= '9'))
		return ;
	else
		*is_first = 1;
}

char	*ft_strcapitalize(char *str)
{
	int	is_first;

	is_first = 1;
	while (*str)
	{
		if (is_first == 1)
			check_first(str, &is_first);
		else
			check_other(str, &is_first);
		str++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("----------------\n");
	
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	
	printf("----------------\n");
}*/
