#include<stdio.h>
int main ()
{
    int A ;
    printf("Enter the value of A : ", A) ;
    scanf("%d",&A);

    int B ;
    printf("Enter the value of B : ", B) ;
    scanf("%d",&B );
    int C ;
    C = A ;
    A = B ;
    B = C ;
    printf("Swapped value of A is %d and value of B is %d.", A, B ) ;
    printf("\nDone by Pravi Bairagi.") ;
    return 0 ;
}
