/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatis <tbatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 09:48:24 by kfan              #+#    #+#             */
/*   Updated: 2024/07/28 20:23:37 by tbatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

struct						s_dictionary
{
	char					key[1000];
	char					value[1000];
};

typedef struct s_dictionary	t_d;
typedef						t_d(*t_dp);

t_dp						*g_dict(void);
int							*g_size(void);
int							size(void);

int							go_throw_empty(char *str, int s);
int							go_throw_empty2(char *str, int s);
char						*ft_strcpy(char *dest, const char *src);
void						del_empty(char *str);
int							ft_strcmp(char *s1, char *s2);
int							ft_strcount(char *str);
void						parse_line(char *str, struct s_dictionary *dict,
								int s);
void						parse_dict(char *str, struct s_dictionary *dict,
								int line);
int							get_lines_count(char *str);
char						*find_value(char *key);
struct s_dictionary			*parse(char *str);

char						*zero_out(char *numStr, char *target_str);
char						*generate_power_of_ten(char *str, int num);

void						print_hundreds(char *num, int is_first_word);
void						print_tens(char *num, int is_first_word);
void						print_ones(char *num, int is_first_word);
void						print_three(char *num, int is_first_word);
char						*print_n(char *str, int length, int is_first_word);

void						ft_putstr(char *str, int leading_space);
char						*ft_strncpy(char *dest, char *src, unsigned int n);
int							ft_strlen(char *str);
int							ft_strncmp(char *s1, char *s2, unsigned int n);

void						print_any(char *num);

#endif
