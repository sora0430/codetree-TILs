#include <stdio.h>

int main() {
    char c[2][9];
    scanf("%s %s", c[0], c[1]);
    int i, j, k;
    int sum = 0;
    for(i=0;i<2;i++) {
        for(j=0;j<9;j++){
            if(!('0'<=c[i][j]&&c[i][j]<='9')) {
                int temp = 0;
                for(k=0;k<j;k++) {
                    temp *= 10;
                    temp += c[i][k]-'0';
                }
                sum += temp;
                break;
            }
        }
    }
    
    printf("%d", sum);
    return 0;
}