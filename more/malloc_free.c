#include <stdlib.h>
#include <stdio.h>
// -> неопределенный указатель, просто адрес
//  -   массив, длинна массива, 
void* append(short* data, size_t *length, size_t *capacity, short value)
{
    if (*length >= *capacity) {
        short *ar = malloc(sizeof(short) * 2 * *capacity);
        if (ar == NULL) {
            return data;
        }
        (*capacity) *= 2;
        for (int i = 0; i < *length; i++)
        {
            ar[i] = data[1];
        }
        free(data);
        data = ar;
    }
    data[*length] = value;
    (*length)++; //увеличиваем на 1

    return data;
}

int main(void)
{
    size_t capacity = 10; //вместимость
    size_t length = 0;

    short *data = malloc(sizeof(short) * capacity);

    for(int i = 0; i < 11; i++)
    {
        data = append(data, &length, &capacity), rand() % 40 - 20;
    }
    printf("length = %u, capacity = %u\n", length, capacity);
    for (int i = 0; i < length; i++) {
        printf("%d ", data[i]);
    }
    free(data);
    return 0;
}

/*
    char *ar = malloc(10); 
    10 b free memory
    int* ptr_int = malloc(sizeof(int));
    4b free memory
    short* ptr_short = malloc(7 * sizeof(short));
    7 elements of short * sizeof(short)
    
    malloc return NULL if error

    free(ar);
    free(ptr_int);
    free(ptr_short);
    */