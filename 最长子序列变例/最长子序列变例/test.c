#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ans=10000;
char a[100],b[100];
int dpdist(int n,int m,int k)
{
	if(n<0||m<0)
		return 0;
	if(n==0&&m==0)	
	{
		if(ans>k)
			ans=k;
	}
	else {
		if(a[n-1]==b[m-1])
		dpdist(n-1,m-1,k);
		else
		{
		  dpdist(n-1,m,k+1);
		  dpdist(n-1,m-1,k+1);
		  dpdist(n,m-1,k+1);
		}
	}	
	return 0;