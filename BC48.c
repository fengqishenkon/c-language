#include <stdio.h>
int main()
 {
    char ch='O';
    while(EOF!=scanf("%c",&ch))
    {
          getchar();
          if('A'<=ch && ch<='Z')
          {
            ch+=32;
          
          }
          else if('a'<=ch && ch<='z')
            {
                ch-=32;
            }
               printf("%c\n",ch);
    }
    return 0;
}
