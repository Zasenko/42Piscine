/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:15:32 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/17 18:17:07 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_printable(*str) == 1)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdif"[*str / 16]);
			ft_putchar("0123456789abcdif"[*str % 16]);
		}
		str++;
	}
}
/*
int main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	printf("\n----------------\n");
	printf("String: %s\n", str);
	printf("----------------\n");
	ft_putstr_non_printable(str);
}*/
