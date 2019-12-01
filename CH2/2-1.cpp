/**
 * @description: Ë®ÏÉÊý
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <time.h>

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    

    // scanf("%d", &n);

    for(int i = 100; i<=999 ; i++)
    {
        if(i == (i/100)*(i/100)*(i/100) + (i%10)*(i%10)*(i%10) + ((i/10)%10)*((i/10)%10)*((i/10)%10))
        {
            printf("%d\n", i);
        }
    }

    // printf("%d\n", sum);
    printf("Time used = %.2f\n", (double)clock()/CLOCKS_PER_SEC);

    return 0;
}

//another solution
// #include<stdio.h>
// int main() {
//   int a, b, c;
//   for(a = 1; a <= 9; a++)
//     for(b = 0; b <= 9; b++)
//       for(c = 0; c <= 9; c++)
//         if(a*a*a+b*b*b+c*c*c == a*100+b*10+c) printf("%d%d%d\n", a, b, c);
//   return 0;
// }
