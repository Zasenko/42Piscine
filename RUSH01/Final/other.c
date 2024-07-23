/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:16:06 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/21 21:16:08 by mturtule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstring(char *str);
void	ft_char_to_int(char *str, int *arr, int size);
void	ft_putchar(char c);
void	print_grid(int *grid, int x);
int		solve(int *grid, int *input, int x, int pos);
int		check_position(int *grid, int line, int col, int num);
int		char_arr_count(char *arr);
int		check_top_to_btm(int *grid, int *input, int x);
int		check_btm_to_top(int *grid, int *input, int x);
int		check_left_to_right(int *grid, int *input, int x);
int		check_right_to_left(int *grid, int *input, int x);
int		check_visibility(int *grid, int *input, int x);
int		ft_split(char *str, int *arr, int i);

int	char_arr_count(char *arr)
{
	int	i;

	i = 0;
	while (*arr)
	{
		arr++;
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_grid(int *grid, int x)
{
	char	c;
	int		line;
	int		col;

	line = 0;
	while (line < x)
	{
		col = 0;
		while (col < x)
		{
			c = grid[line * x + col] + 48;
			ft_putchar(c);
			ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}

int	check_position(int *grid, int line, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[line * 4 + i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (grid[i * 4 + col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int *grid, int *input, int x, int pos)
{
	int	line;
	int	col;
	int	num;

	if (pos == x * x)
		return (check_visibility(grid, input, x));
	line = pos / x;
	col = pos % x;
	num = 1;
	while (num <= x)
	{
		if (check_position(grid, line, col, num) == 1)
		{
			grid[line * x + col] = num;
			if (solve(grid, input, x, pos + 1) == 1)
				return (1);
			grid[line * x + col] = 0;
		}
		num++;
	}
	return (0);
}
