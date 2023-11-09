#include <stdio.h>
#include <string.h>

int main() {
    char s[10][21];
    int i;
    for(i=0;i<10;i++) {
        scanf("%s", s[i]);
    }
    char c;
    scanf("%*c%c", &c);
    int v = 0;
    for(i=0;i<10;i++) {
        int j = strlen(s[i]);
        if(s[i][j-1] == c) {
            printf("%s\n", s[i]);
            v = 1;
        }
    }
    if(v == 0) printf("None");
    return 0;
}