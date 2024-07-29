/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatis <tbatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:41:06 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/28 20:38:14 by tbatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*find_value(char *key)
{
	int	i;
	t_d	*dictt;

	dictt = *g_dict();
	i = 0;
	while (i < size())
	{
		if (ft_strcmp(key, dictt[i].key) == 0)
			return (dictt[i].value);
		i++;
	}
	return (NULL);
}
