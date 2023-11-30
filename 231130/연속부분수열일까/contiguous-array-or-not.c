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
    int j, k;
    for(i=0;i<l1;i++) {
        for(j=0;j<l2;j++) {
            if(n1[i]==n2[j]) {
                if(n1-i<n2-j) break;
                valid = 1;
                for(k=0;n2-j;k++) {
                    if(n1[k+i]!=n2[k+j]) {
                        valid = 0;
                        break;
                    }
                }
            }
        }
    }

    if(valid != 1) printf("No");
    else printf("Yes");
    return 0;
}