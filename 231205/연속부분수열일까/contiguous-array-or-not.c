#include <stdio.h>
#include <stdlib.h>

int main() {
    int l1, l2;
    scanf("%d %d", &l1, &l2);
    int *n1 = (int *)malloc(sizeof(int)*l1);
    int *n2 = (int *)malloc(sizeof(int)*l2);

    int i;
    for(i=0;i<l1;i++) {
        scanf("%d", &n1[i]);
    }
    for(i=0;i<l2;i++) {
        scanf("%d", &n2[i]);
    }
    
    int valid = 0;
    int j;
    for(i=0;i<l1;i++) {
        if(n1[i]==n2[0]) {
            if(l1-i<l2) break;
            valid = 1;
            for(j=1;j<l2;j++) {
                if(n1[i+j]!=n2[j]) {
                    valid = 0;
                    break;
                }
            }
        }
    }

    if(valid != 1) printf("No");
    else printf("Yes");
    return 0;
}