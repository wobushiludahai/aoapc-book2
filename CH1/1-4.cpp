/**
 * @description: ϰ��1-4 ���Һ�����
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <math.h>

// const double PI = acos(-1.0);        //����
const double PI = 2 * acos(0);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%.3lf %.3lf", sin(n/180.0*PI), cos(n/180.0*PI));
    return 0;
}