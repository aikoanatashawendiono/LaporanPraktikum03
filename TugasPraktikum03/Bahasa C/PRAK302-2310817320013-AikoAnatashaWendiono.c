#include <stdio.h>

int main() {
    int huruf;

    printf("Input:\n");
    scanf("%d", &huruf);

    if (huruf >= 80) {
        printf("Output:\nA\n");
    } else if (huruf >= 70) {
        printf("Output:\nB\n");
    } else if (huruf >= 60) {
        printf("Output:\nC\n");
    } else if (huruf >= 50) {
        printf("Output:\nD\n");
    } else {
        printf("Output:\nE\n");
    }

    return 0;
}
