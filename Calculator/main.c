#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b)
{
    return a+b;
}

int substraction (int c, int d)
{
    return c-d;
}

int main()
{
    printf(" L'addition de a et b vaut %d\n", addition(1,4));
    printf(" La soustraction de c et d vaut %d\n", substraction(1,4));
    return 0;
}
