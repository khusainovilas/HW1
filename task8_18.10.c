#include <stdio.h>
#include <stdlib.h>

/*Дан массив целых чисел [x_1...x_m + n], рассматриваемый как соединение двух его отрезков: 
начала x_1...x_m длины m и конца x_m + 1...x_m + n длины n. Не используя дополнительных массивов, 
переставить местами начало и конец. Делать способом, обсуждавшимся на паре — перевернуть один фрагмент, 
другой, и весь массив. Нужна функция, переворачивающая данный кусок массива.*/

void deploy(int arr[], int start, int size)
{
    for (start; start <  (size / 2) + 1; start++)
    {
        int trans = arr[start]; 
        arr[start] = arr[size - start]; 
        arr[size - start] = trans;  
    }
}


int main() 
{
    int m, n;

    printf("Введите значение m: ");
    scanf("%d", &m);
    printf("Введите значение n: ");
    scanf("%d", &n);

    int size = m + n;

    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        return 1;
    }

    printf("Введите %d чисел:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Содержимое массива:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    deploy(array, 0, n - 1);
    deploy(array, n, n + m - 1);
    deploy(array, 0, n + m - 1);

    printf("Содержимое массива:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;

}

