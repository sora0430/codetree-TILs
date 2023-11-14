#include <stdio.h>
#include <string.h>

int swap(char *a, char *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    char arr[100];
    scanf("%s", &arr);
    int n = strlen(arr);
    int i, j;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]>arr[j]){
                swap(&arr[i], &arr[j]);
            }
        }
    }

    for(i=0;i<n;i++) {
        printf("%c", arr[i]);
    }
    
    return 0;
}