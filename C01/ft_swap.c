/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:14:46 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/15 10:16:32 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 5;
	printf("------------------\n");
	printf("OLD - a: %d, b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("NEW - a: %d, b: %d\n", a, b);
	printf("------------------\n");
}
