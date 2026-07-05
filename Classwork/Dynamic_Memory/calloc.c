#include <stdio.h>
#include <stdlib.h>

// calloc() allocates memory and initializes all elements to 0.

int main() {
    int *ptr;
    int n;

    printf("Enter No of gamers: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("No memory allocation");
        exit(0);
    }

    printf("Before assigning:\n");

    for (int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);   
    }

    printf("Input the serial: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("After assigning:\n");

    for (int i = 0; i < n; i++) {
        printf("%d\n", ptr[i]);
    }
    free(ptr);  

    return 0;
}