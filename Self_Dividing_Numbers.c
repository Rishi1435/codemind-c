#include <stdio.h>

int main() {
    int m, n, i, d;

    scanf("%d %d", &m, &n);


    for (i = m; i <= n; i++) {
        int self = 1; 
        for (d= i; d> 0; d/= 10) {
          
            if (d% 10 == 0 || i % (d% 10) != 0) {
                self= 0;
                break; 
            }
        }

        if (self) {
            printf("%d ", i);
        }
    }

}