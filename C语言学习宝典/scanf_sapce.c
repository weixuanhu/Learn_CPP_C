#include <stdio.h>

int main(int argc, char* argv[]){
    char a[20], b[]="The sky is bule";
    int i;
    for (i=0;i<10;i++) scanf("%c",&a[i]);
    a[i]='\0';
    fgets(b);
    printf("%s%s\n",a,b);
    return 0;
}

/* question: if user input "Fig flower is red.<enter>", 
 * what is the program's output ?
 */