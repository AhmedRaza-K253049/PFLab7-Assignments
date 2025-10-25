#include <stdio.h>
int main(){
    int numbers;
    printf("How many numbers will you enter ?\n");
    scanf("%d", &numbers);
    int array[numbers];
    for(int i = 0; i < numbers; i++){
        printf("Enter you number: ");
        scanf("%d", &array[i]);
    }
    int j = numbers;
    for (j -= 1; j >= 0; j--){
        printf("%d\n", array[j]);
    }
}