/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatis <tbatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:39:45 by tbatis            #+#    #+#             */
/*   Updated: 2024/07/28 21:43:52 by tbatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_dp	*g_dict(void)
{
	static t_d	*dict_array;

	return (&dict_array);
}

int	*g_size(void)
{
	static int	size = 0;

	return (&size);
}

int	size(void)
{
	return (*g_size());
}
