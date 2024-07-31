/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:06:47 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/30 10:06:50 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_intcount(int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		min++;
		i++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	*p;
	int	count;
	int	i;

	if (min >= max)
	{
		p = NULL;
		return (p);
	}
	count = ft_intcount(min, max);
	p = malloc(sizeof(int) * count);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
/*
int main(void)
{
	int *p;

	p = ft_range(-5, 5);
		if (p == NULL)
			return (1);
	free(p);
    // FOR ft_range BEFORE return (p)
      
    	 //for (int d = 0; d < count; d++)
           // printf("%d ", p[d]);
}*/
