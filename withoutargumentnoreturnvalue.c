 // Addition function with no arguments, no return type  
 
 #include<stdio.h>  
 int add();  
 int main()  
 {  
 int a;  
 add();  
 return 0;  
 }  
   
 int add()  
 {  
 int m,x,y;  
 printf("\n Enter two numbers for Addition:");  
 scanf("%d%d",&x,&y);  
 m=x+y;  
 printf("\n Addition is =%d",m);  
 }  
