#include <stdio.h>
int main(){
   unsigned long long b, d , i;
   int a;
    b = 1;
    scanf("%d", &a);
    if (a >= 20){
        printf("00\n");
        return 0;
    }
    while (a >= 1){
        b = a * b;
        a = a - 1;
    }
    d = b;
    printf("%llu", d); //Чисто для себя:)
    printf("\n");

    d = d % 100;
    if (d < 10){
    printf("0%llu", d);
    }
    else{
        printf("%llu", d);
    }
    return 0;
    }
