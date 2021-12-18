#include <stdio.h>
int main()
{
int a;
    while (a != EOF && a!='.') 
    {
        a = getchar();
        if (a >= 96 && a <= 122)
            putchar(a);
    }
}
