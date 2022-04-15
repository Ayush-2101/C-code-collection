#include <stdio.h>
int main()
{int N;
scanf("%d",&N);
if(N<10)
printf("Insufficient Earning");
else if(N<100)
printf("Very Low Earning");
else if(N<1000)
printf("Low Earning");
else if(N<10000)
printf("Sufficient Earning");
else if(N>10000)
printf("High Earning");


	return 0;
}