/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:47:12 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/21 21:47:21 by mturtule         ###   ########.fr       */
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

int	help_main(int argc, char **argv, int input[16], int *grid)
{
	if (argc < 2)
	{
		free(grid);
		ft_putstring("No Arguments!\n");
		return (1);
	}
	else
	{
		if (ft_split(argv[1], input, 0) == 0)
		{
			free(grid);
			return (1);
		}
		else
		{
			if (solve(grid, input, 4, 0))
				print_grid(grid, 4);
			else
				ft_putstring("No solution found!\n");
		}
	}
	free(grid);
	return (0);
}

int	main(int argc, char **argv)
{
	int	input[16];
	int	*grid;
	int	x;
	int	i;

	x = 4;
	grid = (int *)malloc(x * x * sizeof(int));
	if (grid == NULL)
	{
		ft_putstring("Memory allocation failed!\n");
		return (1);
	}
	i = 0;
	while (i < x * x)
	{
		grid[i] = 0;
		i++;
	}
	return (help_main(argc, argv, input, grid));
}
