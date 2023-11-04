#include <stdio.h>

int main() {
    int angka;

    printf("Input:\n");
    scanf("%d", &angka);

    if (angka == 0) {
        printf("Output:\nnol\n");
    } else if (angka > 0) {
        printf("Output:\npositif\n");
    } else if (angka < 0) {
        printf("Output:\nnegatif\n");
    }

    return 0;
}
