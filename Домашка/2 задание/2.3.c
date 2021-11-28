/*#include <stdio.h>
int main()
{
  int a;
   // проверить что число попало в [5;10)
   // && = and = И
   // || = or = ИЛИ
   scanf("%d", &a);
   if (a >= 5 && a < 10) {
       printf("Yes");
   }
   else {
       printf("No");
   }
   return 0;
}
   */
/*
// вводят 2 (необязательно целых) числа, нужно вывести наибольшее из них! а если они равны, то вывести *
#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    if (a > b) {
        printf("%f\n", a);
    }
    else if (a == b) {
        printf("*\n");
    }
    else {
        printf("%f", b);
    }
    return 0;
}
 */
// вводят 3 целых числа вывести их по порядку (возврастания) ДОМА!!!

#include <stdio.h>
// вывести среднее из трёх чисел
//1 2 300
//2
// 300 45 45

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a < c ) {
        printf("%d\n", a);
    }
    if (a < b && a > c ) {
        printf("%d\n", a);
    }
    if (b > a && b < c ) {
        printf("%d\n", b);
    }
    if (b < a && b > c ) {
        printf("%d\n", b);
    }
    if (c > b && c < a ) {
        printf("%d\n", c);
    }
    if (c < b && c > a ) {
        printf("%d\n", c);
    }
    if ( a == b || a == c ){
        if (a == b) {
            printf("%d\n", a);
        }
        else {
            printf("%d\n", c);
        }
    }
    else if (b == c) {
            printf("%d\n", c);
        }
    return 0;
}
