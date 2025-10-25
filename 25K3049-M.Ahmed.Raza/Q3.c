#include <stdio.h>
int main(){
    int size;
    printf("What is you array size ?\n");
    scanf("%d", &size);
    int array1[size], array2[size];
    for(int i = 0; i < size; i++){
        array2[i] = 0;
    }
    for(int i = 0; i < size; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &array1[i]);
    }
    for(int i = 0; i < size; i++){
        array2[array1[i]] += 1;
    }
    for(int i = 0; i < size; i++){
        if (array2[i] > 1){
            printf("Number %d occurs more than once\n", i);
        }
    }
}