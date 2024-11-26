#include <stdio.h>

int main() {
    int num, total = 0;
	// lap lai 5 lan de nhap 5 so nguyen
    for (int i = 1; i <= 5; i++) {
        printf("Nhap so nguyen thu %d: ", i);
        scanf("%d", &num);
        // Kiem tra neu so do la so le
        if (num % 2 != 0) {
            total += num;
        }
    }
    // In tong cua cac so le
    printf("Tong cac so le la: %d\n", total);

    return 0;
}
