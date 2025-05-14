#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5}; 
	int i;
    // thay doi gia tri
    for (i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            array[i] += 3; // so chan +3
        } else {
            array[i] += 2; // So le +2
        }
    }

    //in mang 
    printf("Mang sau khi thay doi:\n[");
    for (i = 0; i < 5; i++) {
        printf("%d", array[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

