#include <stdio.h>
int main(){
    char array[30];
    printf("Enter a alphabetic string:\n");
    int result = scanf("%[^0-9\n]", array);
    if(result == 1 && array[0] != '\0'){
        printf("Your input string was: %s", array);
    }else{
        printf("You input a numeric string");
    }
}