#include <stdio.h>
int main(){
    char str[10];
    int i=0,g=0;
    int flag=0;
    clrscr(;
    printf("\n enter string");
    scanf(%s,&str);
    while(str[i]!=0)
    {
        i++;

    }
    i--;
    while(g!=i)
    {
        if(str[i]==str[g])
        flag=1;
    }
    else{
        flag=2;
        break;
    }
    g++;
    i--;
    }
    if(flag==1)
    {
        printf("%s is a palindrome");
    }
    else
    {
        printf("%s is not palindrome,str");
    }
        return 0;

}