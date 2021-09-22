/* Take two input,
   perform mathematical operations 
   and print result*/

#include<stdio.h>

int main(){

    //if input is float value:
    float num1, num2, result;
    printf("Enter two float values: \n");
    scanf("%f %f", &num1, &num2);
    result = num1* num2;
    printf("%f * %f = %f \n", num1, num2, result);

    //to limit the float values to two decimal places:
    printf("%.2f * %.2f = %.2f \n", num1, num2, result);

    return 0;
}
