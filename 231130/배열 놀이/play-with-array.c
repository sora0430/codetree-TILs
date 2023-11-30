#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q;
    long int *arr;
    scanf("%d %d", &n, &q);
    arr = (long int *)malloc(sizeof(long int)*q);
    int i;

    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    int j;
    for(i=0;i<n;i++) {
        int qType;
        int a, b;
        scanf("%d", &qType);
        switch(qType) {
            case 1:
                scanf("%d", &a);
                printf("%d\n", arr[a-1]);
                break;
            case 2:
                scanf("%d", &a);
                for(j=0;j<n;j++) {
                    if(arr[j]==a) {
                        printf("%d\n", j+1);
                        break;
                    }
                }
                break;
            case 3:
                scanf("%d %d", &a, &b);
                for(j=a-1;j<=b-1;j++) {
                    printf("%d ", arr[j]);
                }
                printf("\n");
                break;
        }
    }
    free(arr);
    arr = NULL;
    return 0;
}