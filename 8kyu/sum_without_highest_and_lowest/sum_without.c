void    swap(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    sort(int    *array, int length)
{
    int i;

    i = 0;
    while(i < length - 1)
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

/*int sum(const int numbers[], int length)
{
    sort(numbers, length);
    return (0);
}*/

#include <stdio.h>

int main(void)
{   
    int numbers[] = {6, 2, 1, 8, 10};
    sort(numbers, 5);
    for(int i = 0; i < 5; i++)
    {
        printf("[%d]", numbers[i]);
    }
    printf("\n");
}
