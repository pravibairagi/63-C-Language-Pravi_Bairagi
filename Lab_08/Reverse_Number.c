#include<stdio.h>
int main (){
    int n ;
    printf("Enter a number : ") ;
    scanf("%d",&n);
    int a = 0 ;
    while (n>0){
        a = a * 10 ;
        a = a + (n % 10) ;
        n = n / 10 ;
    }
     printf("Reversed number: %d\n", a);
        return 0;
    }
