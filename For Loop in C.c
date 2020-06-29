#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char *s[] = {"one","two","three","four","five","six","seven","eight","nine"};
  	for(int i=a;i<=b;i++)
      if(i<=9){
          printf("%s\n",s[i-1]);
      }
        else
        {
        i%2==0?printf("even\n"):printf("odd\n");
        }
    return 0;
}

