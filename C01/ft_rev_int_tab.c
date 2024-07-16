/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <dzasenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:09:16 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/15 17:32:28 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buf_a;

	buf_a = *a;
	*a = *b;
	*b = buf_a;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size) / 2)
	{
		ft_ultimate_div_mod(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

int	main()
{
	int	arr[5] = {1,2,3,4,5};
	int	i;

	i = 0;
	
	printf("------------------\n");
	printf("OLD: ");
	while (i < 5)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");
	
	ft_rev_int_tab(arr, 5);
	
	i = 0;
	printf("NEW: ");
	while (i < 5)
	{
		printf("%d ",arr[i]);
		i++;
	}
	printf("\n");
	printf("------------------\n");
}
