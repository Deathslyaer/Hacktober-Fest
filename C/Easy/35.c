#include <stdio.h>

int main() {
    
    int array1[] = {1, 2, 3}; 
    int array2[] = {4, 5, 6}; 
    int concatenated[6];     

    
    for (int i = 0; i < 6; i++) {
        concatenated[i] = array1[i];
    }

   
    for (int i = 0; i < 6; i++) {
        concatenated[i] = array2[i];
    }

 
    for (int i = 0; i < 6; i++) {
        printf("%d ", concatenated[i]);
    }
    printf("\n");

    return 0;
}
