/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_any.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatis <tbatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:27:28 by tbatis            #+#    #+#             */
/*   Updated: 2024/07/28 22:37:03 by tbatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_any(char *num)
{
	char	temp[500];
	int		bracket;
	int		full_length;
	int		length;
	int		is_zeros;

	full_length = ft_strlen(num);
	if (ft_strlen(num) == 1 && *num == '0')
		ft_putstr(find_value("0"), 0);
	while (*num)
	{
		is_zeros = ft_strncmp(num, "000", 3);
		length = ft_strlen(num);
		bracket = ft_strlen(num) - (ft_strlen(num) - 1) % 3;
		if (length % 3 == 0)
			num = print_n(num, 3, full_length == length);
		if (length % 3 == 2)
			num = print_n(num, 2, full_length == length);
		if (length % 3 == 1)
			num = print_n(num, 1, full_length == length);
		if (length > 3 && is_zeros != 0)
			ft_putstr(find_value(generate_power_of_ten(temp, bracket)), 1);
	}
}
