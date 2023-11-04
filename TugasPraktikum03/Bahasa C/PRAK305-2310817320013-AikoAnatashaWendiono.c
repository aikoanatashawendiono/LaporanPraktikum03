#include <stdio.h>

int main() {
    int detik;
    printf("Input: \n");
    scanf("%d", &detik);

    int hari = detik / 86400;
    int hari_sisa = detik % 86400;
    int jam = hari_sisa / 3600;
    int detik_sisa = hari_sisa % 3600;
    int menit = detik_sisa / 60;
    detik = detik_sisa % 60;

    if (hari >= 1) {
        printf("Output:\n");
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("Output:\n");
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}
