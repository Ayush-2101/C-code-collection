#include <stdio.h>
int main()
{
    int l,b,area,peri;
    scanf("%d",&l);
    scanf("%d",&b);
    area=l*b;
    peri=2*(l+b);
    if (area>peri){
        printf("Area");
        printf("\n%d",area);
       }
       else if(area<peri){
           printf("Peri");
           printf("\n%d",peri);
       }
       else{
           printf("Eq");
           printf("\n%d",peri);
       }
    return 0;
}