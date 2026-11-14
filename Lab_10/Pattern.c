#include <stdio.h>

int main() {
    int rows ;
    printf("The number of rows in pattern :");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++) {        
        for (int j = 1; j <= i; j++) {      
            printf("* ");
        }
        printf("\n");                       
    }
    printf("\nDone by Pravi Bairagi ");
    return 0;
}
