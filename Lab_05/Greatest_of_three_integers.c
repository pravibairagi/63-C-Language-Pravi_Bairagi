#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
int main ()  
 {
    int a ;
    printf("Enter the value of A : ", a) ;
    scanf("%d",&a );

    int b ;
    printf("Enter the value of B : ", b) ;
    scanf("%d",&b );
    int c ;
    printf("Enter the value of C : ", c) ;
    scanf("%d",&c );

    if(a>b && a>c ) { 
    printf("%d is the greatest integer ", a);
    }
    else if (b>a && b>c ) {
    printf("%d is the greatest integer ", b );
    }
    else {
    printf("%d is the greatest interger ", c );
    }
   printf("\nDone by Pravi Bairagi.") ;
    return 0 ;
 }                                                                                                                                                                                                                                                                                                                                                                                                                                                     
                           
