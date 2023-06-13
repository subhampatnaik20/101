#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int sum=0,count=-1;
	int i=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum==k)
			break;
		if(sum>k)
		{
			count++;
			i=count;
			sum=0;
		}
	}
	printf("%d %d",count+2,i+1);
}
