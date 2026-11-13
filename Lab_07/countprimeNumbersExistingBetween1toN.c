#include<stdio.h>
int main ()
{
    int n ;
    int count = 0 ;
    scanf("%d",&n );
    for(int num = 2; num <= n-1; num ++ )
    {
        int flag = 0 ;
        for (int i = 2 ; i*i <= num ; i++ ){
            if (num% i == 0 )
            {
                flag = 1 ;
                break ;
            }
        } 
        
        if (  flag == 0)
        count ++ ;
    }
    printf("Total prime number = %d ",count );
    printf("\nDone by Pravi Bairagi") ;
    return 0 ;
}
