/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzasenko <dzasenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:41:53 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/28 17:42:37 by dzasenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	get_lines_count(char *str)
{
	int	line_count;

	line_count = 0;
	while (*str)
	{
		if (*str == '\n')
			line_count++;
		str++;
	}
	return (line_count);
}

void	del_empty(char *str)
{
	int	i;

	i = ft_strcount(str);
	if (i > 0)
	{
		while (i > 0)
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\r' || str[i - 1] == '\t'
				|| str[i - 1] == '\f' || str[i - 1] == '\v')
			{
				str[i - 1] = '\0';
				i--;
			}
			else
				break ;
		}
	}
}

int	go_throw_empty(char *str, int s)
{
	while ((str[s] == ' ' || str[s] == '\r' || str[s] == '\t' || str[s] == '\f'
			|| str[s] == '\v') && str[s] != '\0')
		s++;
	return (s);
}

int	go_throw_empty2(char *str, int s)
{
	while ((str[s] == ':' || str[s] == ' ' || str[s] == '\r' || str[s] == '\t'
			|| str[s] == '\f' || str[s] == '\v') && str[s] != '\0')
		s++;
	return (s);
}
