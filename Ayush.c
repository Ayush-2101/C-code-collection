#include <stdio.h>
union Time{
 int h1,h2,m1,m2,s1,s2,h,m,s;
}t1,t2,t3,t4,t5,t6;
int main()
{scanf("%d %d",&t1.h1,&t2.h2);
scanf("%d %d",&t3.m1,&t4.m2);
scanf("%d %d",&t5.s1,&t6.s2);
printf("%d\n%d\n%d",(t1.h1-t2.h2),(t3.m1-t4.m2),(t5.s1-t6.s2));
return 0;
}