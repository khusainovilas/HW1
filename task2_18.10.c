#include <stdio.h>
#include <stdlib.h>

//Поменять значения двух целочисленных переменных местами (без привлечения третьей переменной и файлов)

int main()
{
    int n = 6;
    int m = 10;

    n = n + m;
    m = n - m;
    n = n - m;

    printf("n = %d\n", n);
    printf("m = %d\n", m);
    return 0; 

}