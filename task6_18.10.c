#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Напишите программу, печатающую все простые числа, не превосходящие заданного числа.

int primenumber(int n){

    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    for (int i = 3; i * i < n; i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }

    return 1;
}

int main(){

    int n; 

    printf("Введите значение n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (primenumber(i) == 1)
        printf("%d\n", i);
    }

}
