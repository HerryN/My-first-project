#include<iostream.h>
int main()
{
	int m=500;
	for(int i=1;i<=100;i++)
	{
		if(i%2==1 && i*i<m)
		{
		 cout<<i*i<<" ";	
		}
	}
}