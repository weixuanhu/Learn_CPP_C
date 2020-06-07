#include <stdio.h>

#define CLEAR_BUF \
    {\
        int ch;\
        while ((ch=getchar())!=EOF && ch!='\n') \
        {\
            ;\
        }\
    }

void NotClearBuf(){
    char str[1000];
    char str2[1000];
    printf("please input something: ");
    scanf("%s", str);
    scanf("%s", str2);
    printf("str is: %s\n", str);
    printf("str2 is: %s\n", str2);
}

void ClearBuf(){
    char str3[1000];
    char str4[1000];
    printf("please input something: ");
    scanf("%s", str3);
    // fflush(stdin);       //  This function does not work
    CLEAR_BUF;
    scanf("%s", str4);
    printf("str3 is: %s\n", str3);
    printf("str4 is: %s\n", str4);
}

int main(int argc, char* argv[]){
    NotClearBuf();
    CLEAR_BUF;
    ClearBuf();
    CLEAR_BUF;
    return 0;
}