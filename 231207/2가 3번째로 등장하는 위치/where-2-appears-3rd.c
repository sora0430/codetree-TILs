#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, cnt = 0, *arr;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++) {
        if(arr[i]==2) cnt++;
        if(cnt == 3) {
            printf("%d", i+1);
            break;
        }
    }
    return 0;
}