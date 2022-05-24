#include<stdio.h>
float addition(float num1, float num2)
{
   float sum;
   sum = num1 + num2;   
   return sum;
}
int main()
{  
   float number1, number2, result;
   printf("Enter two number: ");
   scanf("%f %f",&number1, &number2);
   result = addition(number1, number2);
   printf("%.2f + %.2f = %.2f\n",number1, number2, result);
   return 0;
}