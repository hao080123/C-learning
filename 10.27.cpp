//数组 按照从小到大的顺序排列 2026.10.27
#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int t=1;t<n;t++)
	{ 
		for(int m=0;m<n-t;m++)
		{
			 if(a[m]>a[m+1]) 
			 {
			 	int x=a[m];
			 	a[m]=a[m+1];
			 	a[m+1]=x;
			 }
			}	
		}for( int d=0;d<n;d++)
		
		
	cout<<a[d]<<" ";

	return 0;
	
	
}