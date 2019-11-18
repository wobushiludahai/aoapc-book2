/**
 * @description: 习题1-4 正弦和余弦
 * @param {type} 
 * @return: 
 */

#include <stdio.h>
#include <math.h>

// const double PI = acos(-1.0);        //均可
const double PI = 2 * acos(0);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%.3lf %.3lf", sin(n/180.0*PI), cos(n/180.0*PI));
    return 0;
}