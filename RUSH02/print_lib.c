/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatis <tbatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:29:14 by tbatis            #+#    #+#             */
/*   Updated: 2024/07/28 19:04:52 by tbatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h" 

void	print_hundreds(char *num, int is_first_word)
{
	char	temp[2];

	ft_strncpy(temp, num, 1);
	if (*num != '0')
	{
		ft_putstr(find_value(temp), !is_first_word);
		ft_putstr(find_value("100"), 1);
	}
}

void	print_tens(char *num, int is_first_word)
{
	char	temp[3];

	if (*num != '0')
	{
		if (*num == '1')
		{
			ft_strncpy(temp, num, 2);
		}
		else
		{
			zero_out(num, temp);
		}
		ft_putstr(find_value(temp), !is_first_word);
	}
}

void	print_ones(char *num, int is_first_word)
{
	char	temp[2];

	if (*num != '0' && *num)
	{
		ft_strncpy(temp, num, 1);
		ft_putstr(find_value(temp), !is_first_word);
	}
}

void	print_three(char *num, int is_first_word)
{
	int	len;

	len = ft_strlen(num);
	if (len > 2)
	{
		print_hundreds(num, is_first_word);
		num++;
		is_first_word = 0;
	}
	if (len > 1)
	{
		print_tens(num, is_first_word);
		is_first_word = 0;
		if (*num == '1')
			num++;
		num++;
	}
	print_ones(num, is_first_word);
}

char	*print_n(char *str, int length, int is_first_word)
{
	char	temp[100];

	ft_strncpy(temp, str, length);
	print_three(temp, is_first_word);
	return (str + length);
}
