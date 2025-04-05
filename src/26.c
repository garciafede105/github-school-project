#include <stdio.h>

int main() {
    int i;
    printf("Hello, World!\n");
    
    for (i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }
}
