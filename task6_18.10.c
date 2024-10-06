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

    for (int i = 3; i < (sqrt(n) + 1); i += 2)
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

    int m = primenumber(n);
    printf("%d", m);

}