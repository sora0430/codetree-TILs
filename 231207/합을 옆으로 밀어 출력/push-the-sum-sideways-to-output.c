#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, arr[100], temp, sum = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    i=0;
    while(sum!=0) {
        arr[i] = sum%10;
        sum/=10;
        i++;
    }
    int j;
    for(j=i-2;j>=0;j--) {
        printf("%d", arr[j]);
    }
    printf("%d", arr[i-1]);
    return 0;
}