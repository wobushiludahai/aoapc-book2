/**
 * @description: 子序列的和
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <time.h>

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int m,n;
    int casetest = 0;

    while (scanf("%d%d", &n, &m) && n && m)
    {
        float sum = 0;
        casetest++;
        for(int i = n; i <= m; i++)
        {
            sum += (1.0/i/i);
        }
        printf("Case %d: %.5f\n", casetest, sum);
    }

    // printf("%d\n", sum);
    printf("Time used = %.2f\n", (double)clock()/CLOCKS_PER_SEC);

    return 0;
}