#include <stdio.h>
#include <string.h>
int main() {
    char n[35];
    int r = 0;
    int m = 1;
    scanf("%s", n);
    int i;
    for(i=strlen(n)-1;i>=0;i--) {
        if(n[i] == '1') r += m;
        m*=2;
    }

    printf("%d", r);
    return 0;
}