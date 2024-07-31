/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:15:19 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/30 12:43:17 by dzasenko         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	count;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	count = ft_intcount(min, max);
	p = malloc(sizeof(int) * count);
	if (p == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = p;
	i = 0;
	while (i < count)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int main(void)
{
	int *p;
	int size;

	size = ft_ultimate_range(&p, 5, 8);
	if (size == 0 || size == -1)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("returned size: %d\n", size);
	for (int d = 0; d < size; d++) printf("%d ", p[d]);
	free(p);
}*/
