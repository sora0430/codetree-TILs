#include <stdio.h>

int main() {
    int n;
    char alpha;
    scanf("%d %c", &n, &alpha);
    int i;
    char str[20][20];
    int valid[20] = {0, };
    int cnt = 0;
    for(i=0;i<n;i++) {
        scanf("%s", str[i]);
        if(str[i][3]==alpha) {
            cnt++;
            valid[i] = 1;
        }
    }
    printf("%d\n", cnt);
    for(i=0;i<n;i++) {
        if(valid[i]==1) printf("%s\n", str[i]);
    }
    return 0;
}