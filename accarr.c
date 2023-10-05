#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
    //if you prefer dynamic memmor allocation you may use the mallo
    /*
    int *data=malloc(sizeof(int));
    
        */
    return 0;
}
