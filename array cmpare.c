#include <stdio.h>
int main(void) {

        int array1[10];
        int array2[10];
        int i;

        for (i=0;i<11;i++) {

                printf("Enter numbers: ");
                scanf("%d", &array1);
                printf("Enter the elements:");
                scanf("%d",&array2);
        }

        for (i=0;i<11;i++) {

                if (array1[i] != array2[i]) {

                        printf("Not equal \n");
                }
                else {
                        printf("They are equal. \n");
                }
        }
}
    
