/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:47:57 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/14 11:01:27 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	create_line(int x, char first, char middle, char last)
{
	int	index;

	index = 0;
	while (index <= x - 1)
	{
		if (index == 0)
		{
			ft_putchar(first);
		}
		else if (index == x - 1)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(middle);
		}
		index++;
	}
}

void	rush(int x, int y)
{
	int	index_y;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	index_y = 0;
	while (index_y <= y -1)
	{
		if (index_y == 0)
		{
			create_line(x, 'A', 'B', 'C');
		}
		else if (index_y == y - 1)
		{
			create_line(x, 'C', 'B', 'A');
		}
		else
		{
			create_line(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		index_y++;
	}
}
