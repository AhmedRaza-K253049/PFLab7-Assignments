#include <stdio.h>
int main(){
    int index = 0;
    char array1[6], array2[6], array3[11];
    printf("Enter you first array: ");
    scanf("%s", array1);
    printf("Enter you second array: ");
    scanf("%s", array2);
    for(int i = 0; i < 5; i++){
        array3[i] = array1[i];
    }
    for(int i = 5; i < 10; i++){
        array3[i] = array2[index];
        index++;
    }
    array3[10] = '\0';
    printf("%s", array3);
}