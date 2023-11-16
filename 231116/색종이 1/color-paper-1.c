#include <stdio.h>

int main() {
    int arr[500][500];
    int n;
    scanf("%d", &n);
    int i, j, k;
    int area = 0;
    for(i=0;i<n;i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        for(j=x;j<x+10;j++) {
            for(k=y;k<y+10;k++) {
                if(arr[j][k] == 0) {
                    // printf("x:%d y:%d\n", j, k);
                    area++;
                    arr[j][k] = 1; 
                }
            }            
        }
    }
    printf("%d", area);
    return 0;
}