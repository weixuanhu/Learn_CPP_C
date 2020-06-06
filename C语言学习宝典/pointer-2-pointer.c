#include <stdio.h>

// k, m are global variables
int k=7,m=5;

/* argument: s a pointer to an interger pointer
 * t: a pointer to global integer k
 * s=&t: now s point to t, which means what we are going to do with *s will not impact the original *s
 * *s=&m: now t point to m
 * Thus: k=7, *t=5, **s=5
 */
void f(int **s){
    int *t=&k;
    s=&t; *s=&m; printf("%d,%d,%d\n",k,*t,**s);
}

void f2(int **s){
    int *t=&k;
    // s=&t; 
    *s=&m; 
    printf("%d,%d,%d\n",k,*t,**s);
    // should be : 7, 7, 5
}

int main(){
    int i=3, *p=&i,**r=&p;
    f(r);
    printf("%d,%d,%d\n",i,*p,**r);
    // should be 3, 3, 3
    f2(r);
    printf("%d,%d,%d\n",i,*p,**r);
    // should be 3, 5, 5
    return 0;
}