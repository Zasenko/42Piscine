/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatis <tbatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:41:37 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/28 20:32:41 by tbatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	parse_line(char *str, t_d *dict, int s)
{
	char	key[1000];
	char	value[1000];
	int		k;

	k = 0;
	s = go_throw_empty(str, s);
	while (str[s] != ':' && str[s] != '\0')
		key[k++] = str[s++];
	key[k] = '\0';
	s = go_throw_empty2(str, s);
	k = 0;
	while (str[s] != '\n' && str[s] != '\0')
		value[k++] = str[s++];
	value[k] = '\0';
	del_empty(value);
	del_empty(key);
	ft_strcpy(dict->key, key);
	ft_strcpy(dict->value, value);
}

void	parse_dict(char *str, t_d *dict, int line)
{
	int	l;
	int	s;

	l = 0;
	s = 0;
	while (str[s])
	{
		if (l == line)
		{
			parse_line(str, dict, s);
			return ;
		}
		if (str[s] == '\n')
			l++;
		s++;
	}
}

t_d	*parse(char *str)
{
	t_d	*arr_dict;
	int	i;
	int	line_count;

	line_count = get_lines_count(str);
	arr_dict = malloc(line_count * sizeof(t_d));
	if (arr_dict == NULL)
		return (NULL);
	i = 0;
	while (i < line_count)
	{
		parse_dict(str, &arr_dict[i], i);
		i++;
	}
	*g_dict() = arr_dict;
	*g_size() = line_count;
	return (arr_dict);
}
