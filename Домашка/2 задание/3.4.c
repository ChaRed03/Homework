#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a;
    a = 1;
    scanf ("%d", &n);
    for (int i = 0; i < n; ++i){
        int s;
        scanf("%d", &s);



        if (a>s){
            printf("No");
            return 0;
        }

        a = s;
    }
    printf("Yes");
return 0;
}

