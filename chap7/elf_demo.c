/*
学习 elf 文件的示例 demo
参考 九曲阑干 B站视频
ELF:Executable and Linkable Format, 可执行可链接格式

*/

#include<stdio.h>

int count=10;
int value;

void func(int sum){
    printf("sum is:%d\n", sum);
}

int main(){
    static int a=1;
    static int b=0;
    int x =1;
    func(a+b+x);
    return 0;

}