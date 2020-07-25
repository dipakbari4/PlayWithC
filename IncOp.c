#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;

    printf("a before increment %d\n ", a);
    
    a++;    // Increment [post]
    
    printf("a after increment %d\n ", a);


    printf("b before increment %d\n ", b);
    
    ++b;    // Increment [post]
    
    printf("b after increment %d\n ", b);


    
    return 0;
}