/**
 * @description: ������С��    ע������жԵ�c+1λ��������Ĵ���
 * @param {type} 
 * @return: 
 */

#include<stdio.h>
int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);

  printf("%d.", a / b);
  a %= b;
  while(c--) {
    a *= 10;
    int q = a / b;
    if(c == 0 && (a % b) * 10 / b >= 5) q++;
    printf("%d", q);
    a %= b;
  }
  return 0;
}
