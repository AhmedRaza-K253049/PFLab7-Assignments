#include <stdio.h>
int main(){
    int i = 0, space = 0;
    char string[100];
    printf("Enter your string: ");
    fgets(string, 100, stdin);
    while(string[i] != '\0'){
        if(string[i] == ' '){
            space++;
        }
        i++;
    }
    printf("Number of spaces in string are %d", space);
}