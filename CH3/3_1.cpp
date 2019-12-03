/**
 * @description: ÉßĞÎÌîÊ÷
 * @param {type} 
 * @return: 
 */
#include <stdio.h>

#define max 20

int test[max][max] = {0};

int main(void)
{
    int tot = 1;
    int x = 0, y = 0;
    test[x][y] = tot;
    while(tot < max*max)
    {
        while(y < max - 1 && !test[x][y+1]) test[x][++y] = ++tot;
        while(x < max - 1 && !test[x+1][y]) test[++x][y] = ++tot;
        while(y >= 0 && !test[x][y-1]) test[x][--y] = ++tot;
        while(x >= 0 && !test[x-1][y]) test[--x][y] = ++tot;
    }

    for(x = 0; x < max; x++)
    {
        for(y = 0; y < max; y++)
        {
            printf("%3d  ", test[x][y]);
        }
        printf("\n");
    }

    return 0;
}