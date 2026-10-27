//数组取逆序 2026.10.27
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[100];
     for(int d=0;d<n;d++)
	{
	
		
		b[d]=a[n-1-d];
	
}for(int c=0;c<n;c++)
{
	cout<<b[c]<<" ";
}
	return 0;
}
