#include <stdio.h>

int main() {
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
//Min Number
if(a<=b &&a<=c){
    printf("%d ",a);
}else if(c<=a&& c<=b){
    printf("%d ",c);
} else{
    printf("%d ",b);
}

//Max Number
if(a>=b &&a>=c){
    printf("%d",a);
}else if(c>=a&& c>=b){
    printf("%d",c);
} else{
    printf("%d",b);
}
    return 0;
}

