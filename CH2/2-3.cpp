/**
 * @description: µ¹Èý½Ç
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <time.h>

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n;

    scanf("%d", &n);

    for(int i = 0; i< n ; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for(int j = 0; j < (n - i)*2 - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    // printf("%d\n", sum);
    printf("Time used = %.2f\n", (double)clock()/CLOCKS_PER_SEC);

    return 0;
}