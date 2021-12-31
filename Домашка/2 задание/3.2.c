#include <stdio.h>

int main(){
unsigned long long a, b;
b=1;
scanf("%llu", &a);
while (a>=1){
    b=a*b;
    a=a-1;
}
printf("%llu", b);
}
