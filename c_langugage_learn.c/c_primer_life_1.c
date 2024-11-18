#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N1 100
#define N2 20

int main() {
    char strs[N1][N2+1];
    int n = 0; 
    for (int i = 0; i < N1; i++) {
        printf("Enter word: ");
        if (scanf("%20s", strs[i]) != 1) { 
            
            return 1;
        }
        if (strlen(strs[i]) == 4) { 
            n = i;
            break;
        }
    }

    char *max = strs[0];
    for (int i = 1; i <= n; i++) {
        if (strcmp(strs[i], max) > 0) {
            max = strs[i];
        }
    }

    char *min = strs[0];
    for (int i = 1; i <= n; i++) {
        if (strcmp(strs[i], min) < 0) {
            min = strs[i];
        }
    }
    printf("Smallest word: %s\n", min);
    printf("Biggest word: %s\n", max);
    return 0;
}
