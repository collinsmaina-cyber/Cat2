
#include <stdio.h>

int main() {
    int scores[2][2] = {
        {84, 72},
        {59, 0} 
    };

    
    printf("The elements of the scores array are:\n");
    for (int i = 0; i < 2; i++) { 
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
