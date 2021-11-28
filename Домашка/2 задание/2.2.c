#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c && c>b){
        printf("%d %d %d", b, c, a);
                          }
    if (a>b && a>c && c<b){
        printf("%d %d %d", c, b, a);
                          }

    if (b>a && b>c && c>a){
        printf("%d %d %d", a, c, b);
                          }
    if (b>a && b>c && c<b){
        printf("%d %d %d", c, a, b);
                          }

    if (c>b && c>a && a>b){
        printf("%d %d %d", b, a, c);
                          }
    if (c>b && c>a && a<b){
        printf("%d %d %d", a, b, c);
                          }
    return 0;
}
