/* Take two input,
   perform mathematical operations 
   and print result*/

#include<stdio.h>

int main(){

    //if input is integer value

    int num1, num2;
    printf("Enter two integer values:\n");
    scanf("%d %d", &num1, &num2);
    printf("%d * %d = %d \n", num1, num2, num1*num2);

    return 0;
}
