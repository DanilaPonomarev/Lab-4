// c) удалить все символы, не являющиеся строчными латинскими буквами;
#include <stdio.h>
int main()
{
int a;
    while (a != EOF && a !='.') 
    {
        a = getchar();
        if (a >= 65 && a <= 90) 
        {
            putchar(a + 32);
            continue;
        }
        putchar(a);
    }
}
