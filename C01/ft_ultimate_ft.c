/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:54:25 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/15 10:13:33 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{       
    int	i;
    int*	nbr1;
    int**	nbr2;
    int***	nbr3;
    int****	nbr4;
    int*****	nbr5;
    int******	nbr6;
    int*******	nbr7;
    int********	nbr8;
    int*********	nbr9;

    i = 5;
    nbr1 = &i;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr9 = &nbr8;
    printf("------------------\n");
    printf("Old: %d\n", i);
    ft_ultimate_ft(nbr9);
    printf("New: %d\n", i);
    printf("------------------\n");
}
