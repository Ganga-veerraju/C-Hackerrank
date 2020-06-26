#include <stdio.h>

void update(int *a,int *b) {
    int r= *a;
    int s=*b;
    *a=r+s;
    *b=(r>s)?(r-s):(s-r);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

