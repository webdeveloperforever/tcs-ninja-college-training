#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d",i+1);
		  if(i!=n)
		  {
		  	printf("%d",i);
		  }
	}
		  i++;
	}
}
