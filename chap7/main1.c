/*
练习 汇编流程，学习手动链接 main1.o & sum.o
gcc -E -o main.i main.c  # main.c --->  main.i
gcc -S -o main.s main.i  # main.i --->  main.s
gcc -c main.s -o main.o
*/

#include <stdio.h>

int sum(int *a, int n);
int array[2]={1,4};

int main(){
    int val= sum(array, 2);
    printf("sum is:%d\n", val);
    return 0;

}