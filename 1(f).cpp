// f) каждую группу рядом стоящих символов ‘+’ заменить одним таким символом;
#include <stdio.h>
int main()
{
int a, plus=0;
    while (a != EOF) 
    {
        a = getchar();
        if (a == '+' && plus=='+') 
        {
            continue;
        }
        plus=a;
        putchar(a);
    }
}
