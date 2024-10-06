#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Заданы две строки: S и S1. Найдите количество вхождений S1 в S как подстроки.*/

int main()
{
    char S[] = "ABCDAAAEFAB";
    char S1[] = "AAAA";
    int length_S = strlen(S);
    int length_S1 = strlen(S1);
    int result = 0;

    for (int i = 0; i < length_S - length_S1 + 1; i++)
    {   
        char localstr[length_S1 + 1];
        for (int j = 0; j < length_S1; j++)
        {
            localstr[j] = S[i + j];
        }
        localstr[length_S1] = '\0';
        printf("%s\n", localstr);

        if (strcmp(localstr, S1) == 0)
        {
            result++;
        }

    }

    printf("%d\n", result);
    return 0;
}