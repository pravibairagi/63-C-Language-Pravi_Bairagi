#include<stdio.h>
int main ()
{
    int n ;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int count = 0 ;
    for ( int i = 1 ; i <= n ; i++ ){
        if (i % 3 == 0 && i % 5 != 0 )
           { printf("%d   ",i);
            count ++ ;
           }
    }
    printf("\nTotal count = %d",count);
    printf("\nDone by Pravi Bairagi ");
    return 0 ;
}
