#include <stdio.h>
int main() {
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    
    if (i % 2 == 0) {
        for (i = 0; i < i/2; i++) {
            printf("*");
        }
    } else {
        for (i = 0; i < i/2; i++) {
            printf(" ");
        }
        
        for (i = 0; i < i/2; i++) {
            if (i % 2 != 0) {
                printf("#");
            } else {
                printf("*");
            }
        }
    }

    return 0;
}
