#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int MAX_LEN=256;
     char c;
     char str[MAX_LEN];
     char sen[MAX_LEN];

     scanf("%c", &c);
     scanf("%s ", str);
     scanf("%[^\n]%*c", sen);

     printf("%c\n", c);
     printf("%s\n", str);
     printf("%s\n", sen);

     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
