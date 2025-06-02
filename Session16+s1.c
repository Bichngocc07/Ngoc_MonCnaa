#include <stdio.h>

int main() {
    int x = 10;     
    int *ptr = &x;   

    
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", (void*)&x);

    
    
    return 0;
}

