/*
整数比较判断，p75–习题2.44
考虑 int x, y; 
unsigned ux = x;
unsigned uy = y
判断：
1)x<0 --> ((x*2)<0)   
2)ux>-1 ??  							
3)x>y --> -x<-y     
4)x*x >= 0 ??
全部是x的
*/

#include <stdio.h>
#include <limits.h>

int main(void){
    int x1 = INT_MIN;  //最小值 1000....00
    printf("case1: x=%d, x*2=%d\n", x1, x1*2);
    
    unsigned ux=5;   //有符号数会强制转为无符号数
    printf("case2: ux>-1: %d\n", ux>-1);

    int x2=1;
    int y= INT_MIN;  // y相反数为自己，仍为最小数
    printf("case3: x >y: %d\n", x2>y);
    printf("       -x<-y: %d\n", -x2<-y);

    int x3=50000;   //溢出
    printf("case4: x*x: %d\n", x3*x3);

    return 0;
}

/*
dufy@MBP chap2 % gcc -o ./tmp/test ex-2.44_.c 
dufy@MBP chap2 % ./tmp/test 
case1: x=-2147483648, x*2=0
case2: ux>-1: 0
case3: x >y: 1
       -x<-y: 0
case4: x*x: -1794967296
*/
