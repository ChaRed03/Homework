#include <stdio.h>
int main()
{
    int max = -99999;
    int min = 99999;
    for(;;){
        int N;
        scanf("%d", &N);
        if (N == -228){
            printf("%d\n", max);
            printf("%d\n", min);
            break;
        }

        int tmp = N;

        if ( tmp > max ) {
            max = tmp;
        }
         if ( tmp < min ) {
            min = tmp;
        }


    }

   return 0;
}
