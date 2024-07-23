/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_vis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:02:59 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/21 20:03:34 by mturtule         ###   ########.fr       */
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

int	check_top_to_btm(int *grid, int *input, int x)
{
	int	line;
	int	col;
	int	max;
	int	visible;

	col = 0;
	while (col < x)
	{
		line = 0;
		max = 0;
		visible = 0;
		while (line < x)
		{
			if (grid[line * x + col] > max)
			{
				max = grid[line * x + col];
				visible++;
			}
			line++;
		}
		if (visible != input[col])
			return (0);
		col++;
	}
	return (1);
}

int	check_btm_to_top(int *grid, int *input, int x)
{
	int	line;
	int	col;
	int	max;
	int	visible;

	col = 0;
	while (col < x)
	{
		line = x - 1;
		max = 0;
		visible = 0;
		while (line >= 0)
		{
			if (grid[line * x + col] > max)
			{
				max = grid[line * x + col];
				visible++;
			}
			line--;
		}
		if (visible != input[4 + col])
			return (0);
		col++;
	}
	return (1);
}

int	check_left_to_right(int *grid, int *input, int x)
{
	int	line;
	int	col;
	int	max;
	int	visible;

	line = 0;
	while (line < x)
	{
		col = 0;
		max = 0;
		visible = 0;
		while (col < x)
		{
			if (grid[line * x + col] > max)
			{
				max = grid[line * x + col];
				visible++;
			}
			col++;
		}
		if (visible != input[8 + line])
			return (0);
		line++;
	}
	return (1);
}

int	check_right_to_left(int *grid, int *input, int x)
{
	int	line;
	int	col;
	int	max;
	int	visible;

	line = 0;
	while (line < x)
	{
		col = 4 - 1;
		max = 0;
		visible = 0;
		while (col >= 0)
		{
			if (grid[line * x + col] > max)
			{
				max = grid[line * x + col];
				visible++;
			}
			col--;
		}
		if (visible != input[12 + line])
			return (0);
		line++;
	}
	return (1);
}

int	check_visibility(int *grid, int *input, int x)
{
	if (check_top_to_btm(grid, input, x) == 0)
		return (0);
	if (check_btm_to_top(grid, input, x) == 0)
		return (0);
	if (check_left_to_right(grid, input, x) == 0)
		return (0);
	if (check_right_to_left(grid, input, x) == 0)
		return (0);
	return (1);
}
