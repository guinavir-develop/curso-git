#include <stdio.h>

int main()
{
    int limite = 10;

    printf("contador de numeros ate %d:\n", limite);

    for (int i = 0; i <= limite; i ++)
    {
        printf("%d\n", i);
    }
}