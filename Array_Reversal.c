
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,temp,last;
    scanf("%d", &num);
    last=num-1;
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
   for(i=0;i<num/2;i++)
   {
        temp=arr[i];
        arr[i]=arr[last];
        arr[last]=temp;
        
        last--;
   }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
