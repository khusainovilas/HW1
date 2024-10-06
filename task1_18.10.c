#include <stdio.h>
#include <stdlib.h>

//Напишите программу, считающую количество нулевых элементов в массиве

int main()
{

    int numbers[5] = {1, 4, 0, 65, 0}; 
    int res = 0;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == 0)
        {
            res++; 
        }
    }

    printf("%d\n", res);
    return 0;
}