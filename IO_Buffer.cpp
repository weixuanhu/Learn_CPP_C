// https://blog.csdn.net/zengcccc/article/details/6938508

#include <iostream>

int main(){
    /* 在C语言中，用prinff和scanf进行输入输出，
    往往不能保证所输入输出的数据是可靠的、安全的。
    学过C语言的读者可以分析下面的用法：想用格式符％d输出一个整数，
    但不小心错用了它输出单精度变量和字符串，会出现什么情况?
    假定所用的系统int型占两个字节。
    */
    int anInt = 9;
    float aFloat = 3.14;
    char *aString = "C++";
    printf("%d \n", anInt);  //anInt 为整型变量，正确，输出i的值
    printf("%d \n", aFloat); //aFloat 为单精度变量，输出变量中前两个字节的内容
    printf("%d", aString); //输出字符串"C++”的起始地址
}