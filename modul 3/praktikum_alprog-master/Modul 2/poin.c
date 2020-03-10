#include <stdio.h>
#include <stdlib.h>

int main(){
       int a = 10;
       int b = 1;
       int c = 2;
       int *p = &a;
       printf("p = %d\n", p);
       printf("&a = %d\n", &a);
       printf("&p = %d\n", &p);
       printf("*p = %d\n", *p);
       printf("%d",b/c);
}