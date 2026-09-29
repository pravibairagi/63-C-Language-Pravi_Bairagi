#include<stdio.h>
int main ()
{
    int x ;
    
    printf("The Initial Value of x: ");
    scanf("%d",&x);
    
    printf("Postfix Decrement : %d\n", x-- );
    printf("After Postfix Decrement :%d\n",x);
    printf("Prefix Decrement : %d\n", --x ); 

    return 0 ;

} 
