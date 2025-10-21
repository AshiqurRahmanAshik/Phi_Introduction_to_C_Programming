#include <stdio.h>

int main() {
    int a;
    float f;
    char c;
    scanf("%d %f %c", &a,&f,&c);
    printf("%d %f %c",a,f,c);

    return 0;
}
/*
* & is used to remove the garbage values and then the actual value will be placed.
 # & => Address of (It will be used only while taking input not in showing output)
 # To get the proof of garbage value just print the variable which is only declared not assigned. It will show various value in various compiler.
*/