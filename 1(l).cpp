//l) удалить группы символов, расположенные между фигурными скобками { и }. Скобки тоже должны быть удалены. Предполагается, что скобки сбалансированы, и внутри каждой пары скобок других фигурных скобок нет.
#include <stdio.h>
#include <string.h>
int main()
{
  char str[80];
  int i;
  printf("Введите последовательность символов: \n");
  fgets(str, sizeof(str), stdin);
  printf("Получившаяся последовательность символов: \n");
  for (i = 0; i <= sizeof(str); i++) 
  {
    if (str[i] == '{' && strchr(str+i, '}'))
    while (str[i] != '}')
    i++;
    else
    printf("%c", str[i]);
  }
return 0;
}
