#include <stdio.h>
int main(){
    int size, search, found = 0, index = 0;
    printf("How many numbers will you input ?\n");
    scanf("%d", &size);
    int array[size];
    for(int i = 0; i < size; i++){
        printf("Enter number: ");
        scanf("%d", &array[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &search);
    while(index < size){
        if(array[index] == search){
            found = 1;
            printf("Value found at index %d", index);
        }
        index++;
    }
    if(found == 0){
        printf("-1");
    }
}