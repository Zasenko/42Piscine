/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatis <tbatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:43:21 by dzasenko          #+#    #+#             */
/*   Updated: 2024/07/28 23:10:28 by tbatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*clean_input(char *dest, char *str)
{
	int	i;
	int	digit;

	i = 0;
	while (*str == ' ')
	{
		if (*str == '-')
			return (NULL);
		str++;
	}
	if (*str == '+')
		str++;
	digit = 0;
	while (str[digit] >= '0' && str[digit] <= '9')
		digit++;
	if (str[digit] == '0')
	{
		digit++;
		str--;
	}
	ft_strncpy(dest, str, digit);
	return (dest);
}

int	clean_print(char *input)
{
	char	cleanstr[1000];

	if (!clean_input(cleanstr, input))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_strlen(cleanstr) > 39 || ft_strlen(cleanstr) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!(cleanstr[0] >= '0' && cleanstr[0] <= '9'))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_any(cleanstr);
	return (1);
}

int	load_file(char *str, int argc, char **argv)
{
	int		file;
	ssize_t	size;
	char	*file_name;

	file_name = "numbers.dict";
	if (argc == 3)
		file_name = argv[1];
	file = open(file_name, O_RDONLY);
	if (file == -1)
		write(1, "Dict Error\n", 11);
	size = read(file, str, 500000 * sizeof(char) - 1);
	if (size == -1)
	{
		close(file);
		return (0);
	}
	str[size] = '\0';
	close(file);
	return (1);
}

int	main(int argc, char **argv)
{
	char				str[500000];
	struct s_dictionary	*arr_dict;

	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!load_file(str, argc, argv))
	{
		write(2, "Dict Error\n", 11);
		return (1);
	}
	arr_dict = parse(str);
	if (arr_dict == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	clean_print(argv[argc - 1]);
	free(arr_dict);
	return (0);
}
