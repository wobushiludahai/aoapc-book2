/**
 * @description: ϰ��1-7 ���
 * @param {type} 
 * @return: 
 */
#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);
    if(year % 4 !=0 ||(year % 100 == 0 && year % 400 != 0)) printf("no\n");
    else printf("yes\n");

    return 0;
}