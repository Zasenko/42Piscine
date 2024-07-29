/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_lib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatis <tbatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:44:48 by tbatis            #+#    #+#             */
/*   Updated: 2024/07/28 20:36:51 by tbatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*generate_power_of_ten(char *str, int num)
{
	char	*cache_pointer;
	int		zeros;

	cache_pointer = str;
	if (num <= 0)
	{
		str[0] = '\0';
		return (str);
	}
	*str = '1';
	str++;
	zeros = num - 1;
	while (zeros > 0)
	{
		*str = '0';
		str++;
		zeros--;
	}
	*str = '\0';
	return (cache_pointer);
}

char	*zero_out(char *numStr, char *target_str)
{
	int		i;

	target_str[0] = numStr[0];
	i = 1;
	while (numStr[i] != '\0')
	{
		target_str[i] = '0';
		i++;
	}
	target_str[i] = '\0';
	return (target_str);
}
