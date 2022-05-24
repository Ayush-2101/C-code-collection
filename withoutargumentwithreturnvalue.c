// function without argument and with rfeturn value
#include<stdio.h>
#include<stdlib.h>

int sum()
{
    float a, b, sum;
    printf("Enter 2 numbers:-\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    sum = a+b;
    return sum;
}

int main()
{
    //This is used to clear your all previous outputs 
    system("cls");
    float num;
    num = sum();
    printf("Sum of given 2 numbers are:- %f", num);
    return 0;
}