#include<stdio.h>
int main ()
{
    int n ;
    printf("Enter the number of terms n: " );
    scanf("%d", &n);
    long long first = 0, second = 1, next;
    long long evenSum = 0;
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    }
    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%lld  ", first);
    
    if (first%2 == 0) {
            evenSum += first;
    }
    next = first + second;
        first = second;
        second = next;
    } 
        printf("\nSum of even-valued terms: %lld\n", evenSum);
    return 0;
    }
    
