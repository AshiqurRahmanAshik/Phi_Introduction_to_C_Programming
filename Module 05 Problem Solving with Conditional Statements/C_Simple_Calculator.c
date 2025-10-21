#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c = a+b;
    int d = a-b;
    long long int e= (long long)a*b;
    printf("%d + %d = %d\n",a,b,c);
    printf("%d * %d = %lld\n",a,b,e);
    printf("%d - %d = %d\n",a,b,d);
    return 0;
}