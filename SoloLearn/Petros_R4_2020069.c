// what is the output of this code ?
#include <stdio.h>

int main(int argc, char* argv[]){
    int i;
    for (i=0; i<4; ++i){
        for (int j=0; j<4; ++j){
            i = i + j;
        }
    }
    printf("%d\n",i);
    return 0;
}
