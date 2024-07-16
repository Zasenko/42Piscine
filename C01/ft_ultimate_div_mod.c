/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:21:58 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/15 11:51:46 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buf_a;
	int	buf_b;

	buf_a = *a;
	buf_b = *b;
	*a = buf_a / buf_b;
	*b = buf_a % buf_b;
}

int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 2;
	printf("------------------\n");
	printf("OLD - a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("NEW - a \\ b = %d, reminder: %d\n", a, b);
	printf("------------------\n");
}