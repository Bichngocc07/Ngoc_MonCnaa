#include <stdio.h>

int main() {
    int old_index, new_index, consumption;
    float total = 0;

    
    printf("Nhap chi so dien cu: ");
    scanf("%d", &old_index);
    printf("Nhap chi so dien moi: ");
    scanf("%d", &new_index);

    
    consumption = new_index - old_index;

    
    if (consumption <= 50) {
        total = consumption * 1678;
    } else if (consumption <= 100) {
        total = 50 * 1678 + (consumption - 50) * 1734;
    } else if (consumption <= 200) {
        total = 50 * 1678 + 50 * 1734 + (consumption - 100) * 2014;
    } else if (consumption <= 300) {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + (consumption - 200) * 2536;
    } else if (consumption <= 400) {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (consumption - 300) * 2834;
    } else {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (consumption - 400) * 2927;
    }

    
    total += total * 0.1;

    
    printf("Tong so tien dien phai tra la: %.2f dong\n", total);

    return 0;
}

