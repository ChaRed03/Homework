#include <stdio.h>
int main()
{
    int N;
    int max = -99999;
    int min = 99999;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int tmp;
        scanf("%d", &tmp);
        if ( tmp > max ) {
            max = tmp;
        }
         if ( tmp < min ) {
            min = tmp;
        }
    }
     printf("%d\n", max);
    printf("%d\n", min);
    return 0;
}
