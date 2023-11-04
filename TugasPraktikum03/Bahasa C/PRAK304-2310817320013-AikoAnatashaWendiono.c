#include <stdio.h>

int main() {
    int angka;

    printf("Input:\n");
    scanf("%d", &angka);

    if (angka == 0) {
        printf("Output:\nNol\n");
    } else if (1 <= angka && angka <= 9) {
        printf("Output:\nSatuan\n");
    } else if (10 <= angka && angka <= 19) {
        printf("Output:\nBelasan\n");
    } else if (20 <= angka && angka <= 99) {
        printf("Output:\nPuluhan\n");
    } else {
        printf("Output:\nAnda Menginput Melebihi Limit Bilangan\n");
    }

    return 0;
}
