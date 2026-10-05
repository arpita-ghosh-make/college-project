//tribonacci
#include <stdio.h>
int main()
{
int n,a=0,b=1,c=1,d,i;

printf("Enter number of terms:");
scanf("%d",&n);

printf("Tribonacci series:");

while(i<=n){
	d=a+b+c;
	a=b;
	b=c;
	c=d;
	i++;
}	
	return 0;
}
