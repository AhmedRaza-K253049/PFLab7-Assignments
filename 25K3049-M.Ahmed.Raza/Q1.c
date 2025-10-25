#include <stdio.h>
int main(){
    int numbers, sum = 0;
    printf("How many numbers will you enter ?\n");
    scanf("%d", &numbers);
    int array[numbers];
    for(int i = 0; i < numbers; i++){
        printf("Enter you number: ");
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("Total is %d", sum);
}