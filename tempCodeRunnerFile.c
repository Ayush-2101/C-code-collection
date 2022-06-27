#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void add_item();
void read_item();
void modify_item();
void delete_item();
int option();
void displayheading();
struct phonebook
{
 char name[30];
 long int pno;
 char address[30];
 };
void main()
{
 int c;
 char con='Y';
 while(con=='Y')
 {
 c=option();
 switch(c)
 {
 case 1:
 add_item();
 break;
 case 2:
 read_item();
 break;
 case 3:
 modify_item();
 break;
 case 4:
 delete_item();
 break;
 }
 printf("\nType 'Y' to continue with operations:");
 scanf("\n%c",&con);
 }
}
int option()
{
 int ch;
 printf("\nOptions available:");
 printf("\n1 to add contact in phonebook \n2 to read a contact from phonebook \n3 to modify contacts \n4 to delete a contact from the phonebook");
 printf("\nEnter choice: ");
 scanf("%d",&ch);
 return ch;
}
void add_item()
{
 struct phonebook item;
 FILE *ft;
 char x='Y';
 ft=fopen("phonebook","a+");
 do
 {
 char ch;
 printf("\nEnter Name: ");
 scanf("%s",item.name);
 printf("\nEnter Phone Number: ");
 scanf("%ld",&item.pno);
 printf("\nEnter Email address: ");
 scanf("%s",item.address);
 printf(ft,"%s %ld%s\n",item.name,item.pno,item.address);
 printf("Type 'Y' to repeat the operation\n");
 scanf("\n%c",&ch);
 x=ch;
 }while(x=='Y');
 fclose(ft);
}
void read_item()
{
 struct phonebook item;
 FILE *ft;
 ft=fopen("phonebook","r");
 while(feof(ft)==0)
 {
 fscanf(ft,"%s %ld%s\n",item.name,&item.pno,item.address);
 printf("\n%s %ld %s",item.name,&item.pno,item.address);
 }
 fclose(ft);
}
void modify_item()
{
 struct phonebook item;
 FILE *ft,*fp;
 ft=fopen("phonebook","r");
 fp=fopen("temp","w+");
 long int pno,npno;
 printf("\nEnter the phone number which is to be modified and add the new phone number: \n");
 scanf("%ld  %ld",&pno,&npno);
 while(!feof(ft))
 {
 fscanf(ft,"%s %ld %s\n",item.name,&item.pno,item.address);
 if(item.pno!=pno)
 fprintf(fp,"%s %ld %s\n",item.name,item.pno,item.address);
 else
 {
 item.pno=npno;
 fprintf(fp,"%s %ld %s\n",item.name,item.pno,item.address);
 }
 }
 fclose(ft);
 fclose(fp);
 remove("phonebook");
 rename("temp","phonebook");
}
void delete_item()
{
 struct phonebook item;
 FILE *ft,*fp;
 long int pno;
 ft=fopen("phonebook","r");
 fp=fopen("temp","w+");
 printf("\nEnter the phone number to be deleted: \n");
 scanf("%ld",&pno);
 while (!feof(ft))
 {
 fscanf(ft,"%s %ld %s\n",item.name,&item.pno,item.address);
 if(pno!=item.pno)
 fprintf(fp,"%s %ld %s\n",item.name,item.pno,item.address);
 }
 fclose(ft);
 fclose(fp);
 remove("phonebook");
 rename("temp","phonebook");}
