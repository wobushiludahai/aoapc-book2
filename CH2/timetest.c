/*
 * @Description: 小技巧：1、Time Test   2、如果当值过大结果不再改变可以通过条件限制增加性能  3、使用文件进行输入输出
 * @Author: your name
 * @Date: 2019-12-01 22:41:54
 * @LastEditTime: 2019-12-01 23:13:12
 * @LastEditors: Please set LastEditors
 */
#include <stdio.h>
#include <time.h>

int main(void)
{
    freopen("input.txt", "r", stdin);       //使用文件进行输入输出测试
    freopen("output.txt", "w", stdout);
    int sum = 0;
    int n;

    scanf("%d", &n);

    for(int i = 1; i<=n ; i++)
    {
        int temp = 1;
        for(int j = 1; j <= i; j++)
        {
            temp = (temp * j % 1000000);
        }
        sum = (sum + temp) % 1000000;
    }

    printf("%d\n", sum);
    printf("Time used = %.2f\n", (double)clock()/CLOCKS_PER_SEC);

    return 0;
}