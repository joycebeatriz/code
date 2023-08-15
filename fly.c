#include <stdio.h>
#include <unistd.h>

int main() {
    int i, j;

    for (i = 0; i < 30; i++) {
        for (j = 0; j < 15 + i; j++) {  
            printf(" ");
        }
        printf("✈️\n");
        
        printf("Your mensage here!\n"); 
        
        usleep(200000); 
        printf("\033[H\033[J"); 
    }

    return 0;
}