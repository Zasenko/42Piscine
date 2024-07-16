/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:57:28 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/15 11:12:00 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result;
	int	rem;

	result = a / b;
	rem = a % b;
	*div = result;
	*mod = rem;
}

int main(void)
{       
	int	a;
	int	b;
	int	result;
	int	result_remainder;

	a = 5;
	b = 2;

	printf("------------------\n");
	ft_div_mod(a, b, &result, &result_remainder);
	printf("%d / %d = %d, remainder: %d\n", a, b, result, result_remainder);
	printf("------------------\n");
}
