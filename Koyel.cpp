// 2+5+8+11+14+...upto n terms. W.C.P to calculate sum of given series.//
#include <stdio.h>
int main()
{
	int n,i,term,sum=0;
	printf("Enter the number of terms:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		term = 2 +(i-1)*3;
		sum=sum+term;
	}
	printf("sum=%d",sum);
	return 0;
}

