/**
 * @description: ϰ��1-5 ����
 * @param {type} 
 * @return: 
 */

#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%.2lf", (n > 3 ? (n*95/1.0*0.85):(n*95)));

    return 0;
}