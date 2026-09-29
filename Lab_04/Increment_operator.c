#include<stdio.h>
int main ()
{
    int x ;
    
    printf("The Initial Value of x: ");
    scanf("%d",&x);
    
    printf("Postfix Increment : %d\n", x++ );
    printf("After Postfix Increment :%d\n",x);
    printf("Prefix Increment : %d\n", ++x ); 

    return 0 ;
} 
