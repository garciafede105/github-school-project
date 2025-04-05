#include <stdio.h>

void main() {
    int i;
    
    printf("Hello World\n");
    for(i = 1; i <= 5; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        } else {
            printf("* ");
        }
    }
    printf("\n");
}
