#include <stdio.h>

void iceCreamParlor(int m, int n, int harga[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (harga[i] + harga[j] == m) {
                printf("%d %d\n", i + 1, j + 1);
                return; 
            }
        }
    }
}

int main() {
    int m = 4;
    int harga[] = {1, 4, 5, 3, 2};
    int n = sizeof(harga) / sizeof(harga[0]);

    printf("Daftar harga es krim: [1, 4, 5, 3, 2]\n");
    printf("Jumlah uang (m): %d\n", m);
    printf("Output yang dihasilkan: \n");
    
    iceCreamParlor(m, n, harga);

    return 0;
}
