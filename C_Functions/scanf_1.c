#include <stdio.h>

/*
 * How to let scanf accept strings contains spaces ?
 * https://blog.csdn.net/Sfeng177/article/details/53073937
 */ 

// need to compile with option: -std=c++98

int main(int argc, char* argv[]){
    // this code block's behavior is not user want
    char str[100];
    // user input "I Love You!", the output is "I"
    printf("please input a string: ");
    scanf("%s",str);
    printf("\n%s\n",str);
    fflush(stdout);

    // user input "I Love You!", the output is "I Love You!"
    // with a <enter> remaining in buffer
    /*
    char str2[100];
    printf("please input a string 2: ");
    scanf("%[^\n]",str2);
    printf("\n%s\n",str2);
    */
    return 0;
}