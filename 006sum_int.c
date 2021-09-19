// Take Input from user and print it

#include <stdio.h>

int main(){

    //if input is a sentence
    char str[50];
    printf("Enter a sentence: ");
    scanf("%[^\n]",str);
    printf("Entered sentence is \n%s",str);
    //prints the sentence in a new line

    return 0;
}
