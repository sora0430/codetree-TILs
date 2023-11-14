#include <stdio.h>

int main() {
    int arr[100];
    int n;
    scanf("%d", &n);
    int i, j;
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i=n-1;i>=0;i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}