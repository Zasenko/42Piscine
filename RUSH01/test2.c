#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int input[16] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};
    int grid[4][4] = {0};

	int i = 0;
	int c = 0;
	int d = 0;
	
	while (d < 16)
	{
		while (i < 4)
		{
			while (c < 4)
			{
				grid[i][c] = input[d];
				c++;
				d++;
			}
			c = 0;
			i++;
		}
		
	}
	i = 0;
	c = 0;
	while (i < 4)
	{
		while (c < 4)
		{
			printf("%d ", grid[i][c]);
			c++;
		}
		c = 0;
		i++;
		printf("\n");
	}
    return (0);
}
