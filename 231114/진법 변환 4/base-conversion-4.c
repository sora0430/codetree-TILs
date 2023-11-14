#include <stdio.h>

int main() {
    long long n;
    int r = 0;
    int m = 1;
    scanf("%lld", &n);
    while(n > 0) {
        long long temp = n%10;
        r += temp*m;
        m*=2;
        n/=10;
    }
    printf("%d", r);
    return 0;
}