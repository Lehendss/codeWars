#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    sort(int *array, int n)
{
    int i;

    i = 0;
    while (i < n - 1)
    {
        if (array[i] > array[i + 1])
        {
            swap(&array[i], &array[i + 1]);
            i = 0;
        }
        else
            i++;
    }
}
void    reverse(int *array, int n)
{
    int i;

    i = -1;
    sort(array, n);
    while (++i < n/2)
        swap(&array[i], &array[n - i -1]);
}

void    flip(char d, const int *array, size_t n, int *result)
{
    memcpy(result, array, n *sizeof(int));

    if (d == 'R')
        sort(result, n);
    else
        reverse(result, n);
}


int main(void)
{
    int array[4] = {3, 2, 1, 2};
   
    for(int i = 0; i < 4; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    char d = 'L';
    int expected[4] = {1, 2, 2, 3};
    flip(d, array, 4, expected);
    
    for(int i = 0; i < 4; i++)
    {
        printf("%d", expected[i]);
    }
    printf("\n");
    return (0);
}
