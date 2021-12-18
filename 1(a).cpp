//a) заменить все символы ‘?’ на’!’;
#include <stdio.h>
int main(){
    int a;
    while (a != EOF && a != '.') 
    {
        a = getchar();
        if (a == '?') 
        {
            putchar('!');
            continue;
        }
        putchar(a);
    }
}
