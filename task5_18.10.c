#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Напишите алгоритм проверки баланса скобок в исходной строке 
(т.е. число открывающих скобок равно числу закрывающих и выполняется правило вложенности скобок). 
Скобки бывают только одного типа.*/

int check(char *bracket)
{
    int length = strlen(bracket); 
    int check = 0;

    for (int i = 0; i < length; i++)
    {
        if (bracket[i] == '(')
            check++;
        else
            check--;
        if (check < 0)
            return 0;
    }
    if (check > 0)
        return 0;
    else
        return 1;
}

int main()
{
    char bracket[] = "(())";
    int res = check(bracket);
    printf("Результат: %d - Строка: %s\n", res, bracket);

    return 0;
}