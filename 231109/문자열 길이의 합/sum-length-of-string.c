#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[101];
    int sum[2] = {0, };
    int i;
    for(i=0;i<n;i++) {
        scanf("%s", str);
        sum[0] += strlen(str);
        if('a'==str[0]) sum[1]++;
    }
    printf("%d %d", sum[0], sum[1]);
    return 0;
}