/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mturtule <mturtule@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:11:18 by mturtule          #+#    #+#             */
/*   Updated: 2024/07/21 20:11:20 by mturtule         ###   ########.fr       */
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

void	ft_putstring(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_char_to_int(char *str, int *arr, int size)
{
	int	i;

	i = 0;
	while (*str && i < size)
	{
		arr[i] = *str - '0';
		str++;
		i++;
	}
}

int	ft_help_split(char *str_arr, int *arr, int *i)
{
	if (*i != 16)
	{
		ft_putstring("Wrong number of params!\n");
		return (0);
	}
	ft_char_to_int(str_arr, arr, 16);
	return (1);
}

int	ft_split(char *str, int *arr, int i)
{
	char	str_arr[17];

	while (*str)
	{
		if (*str == ' ')
			str++;
		else
		{
			if (*str >= '1' && *str <= '4' && (i < 17 - 1))
			{
				str_arr[i++] = *str;
			}
			else
			{
				if (*str >= '5' && *str <= '9')
					ft_putstring("Parameter is WRONG number!\n");
				else
					ft_putstring("Parameter not a number!\n");
				return (0);
			}
			str++;
		}
	}
	str_arr[i] = '\0';
	return (ft_help_split(str_arr, arr, &i));
}
