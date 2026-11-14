#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("%d is not a palindrome.\n", n);
        return 0;
    }

    int original = n;

    while (n != 0) {
        remainder = n % 10;                  
        reversed = reversed * 10 + remainder; 
        n /= 10;                            
        }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    printf("\nDone by Pravi Bairagi ");
    return 0;
}
