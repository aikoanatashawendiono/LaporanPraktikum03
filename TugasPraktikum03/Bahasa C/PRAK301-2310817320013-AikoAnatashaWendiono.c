#include <stdio.h>

int main() {
    int angka1, angka2;

    printf("Input:\n");
    scanf("%d %d", &angka1, &angka2);

    if (angka1 > angka2) {
        int angka = angka1;
        angka1 = angka2;
        angka2 = angka;
        printf("Output:\n");
        printf("%d %d\n", angka1, angka2);
        
    } else if (angka1 < angka2) {
        printf("Output:\n");
        printf("%d %d\n", angka1, angka2);
    }

    return 0;
}