#include <stdio.h>

int main() {
    int n;
    int r = 0;
    int m = 1;
    scanf("%d", &n);
    while(n > 0) {
        int temp = n%10;
        r += temp*m;
        m*=2;
        n/=10;
    }
    printf("%d", r);
    return 0;
}