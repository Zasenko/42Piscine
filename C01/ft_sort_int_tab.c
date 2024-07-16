/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:34:50 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/15 18:23:25 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buf_a;

	buf_a = *a;
	*a = *b;
	*b = buf_a;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index2;

	index = 0;
	while (index < size - 1)
	{
		index2 = index +1 ;
		if (index2 < size)
		{
			while (index2 < size)
			{
				if (*(tab + index) > *(tab + index2))
				{
					ft_ultimate_div_mod(tab + index, tab + index2);
				}
				index2++;
			}
			index2 = 0;
		}
		index++;
	}
}

int	main(void)
{
	int	arr[8];
	int	i;

	arr[0] = 0;
	arr[1] = 6;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 3;
	arr[5] = 7;
	arr[6] = 9;
	arr[7] = 1;
	i = 0;
	printf("------------------\n");
	printf("OLD numbers: ");
	while (i < 8)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	
	ft_sort_int_tab(arr, 8);

	i = 0;
	printf("NEW numbers: ");
	while (i < 8)
	{

		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	printf("------------------\n");
}
