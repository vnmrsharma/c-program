/* Take two input,
   perform mathematical operations 
   and print result*/

#include<stdio.h>

int main(){

    //if input is float variable
    float num1, num2, sum;
    printf("Enter two float numbers: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    sum = num1 + num2;
    printf("Sum of %f and %f is %f \n\n", num1, num2, sum);

    return 0;
}
