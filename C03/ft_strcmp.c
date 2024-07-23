/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:31:49 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/23 15:39:14 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
/*
int main(void)
{
    char a[] = "Hello";
    char b[] = "Hello";
    int res;
    
    res = ft_strcmp(a, b);
    
    if (res > 0)
    {
        printf("a > b");
    }
    else if (res < 0)
    {
        printf("a < b");
    }
    else
    {
        printf("a == b");
    }

    return 0;
}*/
