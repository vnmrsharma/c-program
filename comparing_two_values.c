#include<stidio.h>
#include<conio.h>

int main()
{
 int x,y;
  printf("Enter the first number");     
    scanf("%d",&x);                     //taking input the first value
  printf("Enter the first number");     
    scanf("%d",&y);                     //taking input the second value
  
  if(x>y)             //comparing both the numbers
  {
    printf("The first number = %d is greater",x);
  }
  else if(x<y)       //comparing both the numbers
  {
    printf("The second number = %d is greater",y);
  }
  else             //Both the vaules are equal
  {
    printf("both the numbeeers are equal");
  }
  
return 0;
}
