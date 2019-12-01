/**
 * @description: 排列
 * @param {type} 
 * @return: 
 */
#include <stdio.h>
#include <time.h>

int main(void)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
  int abc;
  for(abc = 123; abc <= 329; abc++) {
    int def = abc*2;
    int ghi = abc*3;
    int big = abc * 1000000 + def * 1000 + ghi;
    int ok = 1, d;
    for(d = 1; d <= 9; d++) {
      int n = big;
      int seen = 0;
      while(n > 0) {
        if(n % 10 == d) seen = 1;
        n /= 10;
      }
      if(!seen) {
        ok = 0; /* 数字d没有出现 */
        break;
      }
    }
    if(ok) printf("%d %d %d\n", abc, def, ghi);
  }

    printf("Time used = %.2f\n", (double)clock()/CLOCKS_PER_SEC);

    return 0;
}