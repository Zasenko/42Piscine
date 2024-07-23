#include <stdio.h>
#include <unistd.h>
//#include <stdlib.h>
void    ft_putchar(char c);
void    ft_putstring(char *str);
void    ft_char_to_int(char *str, int *arr, int size);
int char_count(char *arr);
int ft_split(char *str);
int check_visibility(int *grid, int *params);
int is_valid(int *grid, int line, int col, int num);
int solve_grid(int *grid, int *params, int x, int y, int pos);
int check_top_bottom(int *grid, int *params);
int check_bottom_top(int *grid, int *params);
int check_left_right(int *grid, int *params);
int check_right_left(int *grid, int *params);

int main(int argc, char **argv)
{
    if (argc < 2) {
        ft_putstring("No Arguments!\n");
        return (1);
    }
    else {
        if (ft_split(argv[1]) == 0)
            return (0);
    }
    return (0);
}

int    ft_split(char *str)
{
    char str_num[17]; //16 + 1 for \0
    int arr[16];
    int i;
    
    i = 0;
	while (*str)
    {
        if (*str == ' ')
        {
            str++;
        }
        else
        {
            if (*str >= '1' && *str <= '4' && (i < 17 - 1)) //4 is maximum number
            {
                str_num[i] = *str;
                i++;
            }
            else if (*str >= '5' && *str <= '9')
            {
                ft_putstring("Parametr is WRONG number!\n");
                return (1);
            }
            else {
                ft_putstring("Parametr not a number!\n");
                return (1);
            }
            str++;
        }        
    }
    str_num[i] = '\0';

    // check 16 params
    if (char_count(str_num) != 16)
    {
        ft_putstring("Wrong number of params!\n");
        return (0);
    }

    // convert params to number
    ft_char_to_int(str_num, arr, 16);

    // Creating visibility grid
    int grid[4][4] = {0};

    if (solve_grid((int *)grid, arr, 4, 4, 0))
    {
        int i = 0;
        while (i < 4)
        {
            int j = 0;
            while (j < 4)
            {
                printf("%d ", grid[i][j]);
                j++;
            }
            printf("\n");
            i++;
        }
    }
    else
        ft_putstring("No solution found!\n");
    return (0);
}
//ok
int solve_grid(int *grid, int *params, int x, int y, int pos)
{
    int num;
    int line;
    int col;

    if (pos == x * y)
        return (check_visibility(grid, params));
    line = pos / x;
    col = pos % x;
    num = 1;
    while (num <= x)
    {
        if (is_valid(grid, line, col, num))
        {
            grid[line * x + col] = num;
            if (solve_grid(grid, params, x, y, pos + 1))
                return 1;
            grid[line * x + col] = 0;
        }
        num++;
    }
    return 0;
}
//ok
int is_valid(int *grid, int line, int col, int num)
{
    int i;

    // Проверка на строку
    i = 0;
    while (i < 4)
    {
        if (grid[line * 4 + i] == num)
            return 0;
        i++;
    }

    // Проверка на столбец
    i = 0;
    while (i < 4)
    {
        if (grid[i * 4 + col] == num)
            return 0;
        i++;
    }
    return 1;
}
//ok
int check_visibility(int *grid, int *params)
{
    if (!check_top_bottom(grid, params))
        return 0;
    if (!check_bottom_top(grid, params))
        return 0;
    if (!check_left_right(grid, params))
        return 0;
    if (!check_right_left(grid, params))
        return 0;
    return 1;
}
//ok
int check_top_bottom(int *grid, int *params)
{
    int l;
    int i;
    int max;
    int visible;

    i = 0;
    while (i < 4)
    {
        l = 0;
        max = 0;
        visible = 0;
        while (l < 4)
        {
            if (grid[l * 4 + i] > max)
            {
                max = grid[l * 4 + i];
                visible++;
            }
            l++;
        }
        if (visible != params[i])
            return 0;
        i++;
    }
    return 1;
}
//ok
int check_bottom_top(int *grid, int *params)
{
    int l;
    int i;
    int max;
    int visible;

    i = 0;
    while (i < 4)
    {
        l = 4 - 1; 
        max = 0;
        visible = 0;
        while (l >= 0)
        {
            if (grid[l * 4 + i] > max)
            {
                max = grid[l * 4 + i];
                visible++;
            }
            l--;
        }
        if (visible != params[4 + i])
            return 0;
        i++;
    }
    return 1;
}
//ok
int check_left_right(int *grid, int *params)
{
    int l;
    int i;
    int max;
    int visible;

    l = 0;
    while (l < 4)
    {
        i = 0;
        max = 0;
        visible = 0;
        while (i < 4)
        {
            if (grid[l * 4 + i] > max)
            {
                max = grid[l * 4 + i];
                visible++;
            }
            i++;
        }
        if (visible != params[8 + l])
            return 0;
        l++;
    }
    return 1;
}
//ok
int check_right_left(int *grid, int *params)
{
    int l;
    int i;
    int max;
    int visible;

    l = 0;
    while (l < 4)
    {
        i = 4 - 1;
        max = 0;
        visible = 0;
        while (i >= 0)
        {
            if (grid[l * 4 + i] > max)
            {
                max = grid[l * 4 + i];
                visible++;
            }
            i--;
        }
        if (visible != params[12 + l])
            return 0;
        l++;
    }
    return 1;
}
//ok
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//ok
void    ft_putstring(char *str)
{
	while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}
//ok
void    ft_char_to_int(char *str, int *arr, int size)
{
    int i = 0;

	while (*str && i < size)
    {
        arr[i] = *str - '0';
        str++;
        i++;
    }
}
//ok
int char_count(char *arr)
{
    int count;

    count = 0;
    while(*arr)
    {
        count++;
        arr++;
    }
    return (count);
}