/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:13:23 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/14 11:44:46 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	create_line(int x, char first_last, char middle)
{
	int	index_x;

	index_x = 0;
	while (index_x <= x - 1)
	{
		if (index_x == 0 || index_x == x - 1)
		{
			ft_putchar(first_last);
		}
		else
		{
			ft_putchar(middle);
		}
		index_x++;
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
		if (index_y == 0 || index_y == y - 1)
		{
			create_line(x, 'o', '-');
		}
		else
		{
			create_line(x, '|', ' ');
		}
		ft_putchar('\n');
		index_y++;
	}
}
