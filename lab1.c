#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
    const int stepen = 3;
    int a;
    printf("vvedite chislo: ");
    scanf("%d", &a);
    int i = 1;
    while (1)
    {
        i *= stepen;
        if (i == a)
        {
            printf("true\n");
            getch();
            break;
        }
        else if (i > a)
        {
            printf("false\n");
            getch();
            break;
        }

    }
    return 0;
}