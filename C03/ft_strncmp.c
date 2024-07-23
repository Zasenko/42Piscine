/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:38:17 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/23 15:38:27 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
    if (i == n)
	    return (0);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
int main()
{
    char a[] = "Hallo0";
    char b[] = "Hall";
    int res;
    
    res = ft_strncmp(a, b, 5);
    
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
