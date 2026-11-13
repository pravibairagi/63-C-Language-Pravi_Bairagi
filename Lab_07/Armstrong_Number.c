#include <stdio.h>

int main() {
    unsigned long long int num, originalNumber, remainder, n = 0;
    unsigned long long int result = 0;

    printf("Enter an integer: ");
    scanf("%llu", &num);

    originalNumber = num;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = num;

        while (originalNumber != 0) {
        remainder = originalNumber % 10;

        unsigned long long int power = 1;
        for (unsigned long long int i = 0; i < n; i++) {
            power *= remainder;
        }

        result += power;
        originalNumber /= 10;
    }

        if (result == num) {
        printf("%llu is an Armstrong number.\n", num);
    }
        else {
        printf("%llu is not an Armstrong number.\n", num);
    }
    printf("Done by Pravi Bairagi");
    return 0;
}
