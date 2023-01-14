/*
测试反汇编同时显示源代码
gcc -g -o ./tmp/test test.c
objdump -S -d ./tmp/test > test.txt

*/




#include <stdio.h>
int main() {
    printf("????\n");
    int a=1;
    int c=5;
    int b = a-2+c;
    printf("b: %d\n", b);

}