#include<iostream>
using namespace std;
int main()
{
	int l,m;
	cin>>l>>m;
	int a[10000];
	for(int i=0;i<=l;i++)
{
	 a[i]=1;
}int u,v;
for(int b=0;b<m;b++)
{
	int u,v;
	cin>>u>>v;
	for(int d=u;d<=v;d++)
	{
		a[d]=0;
	}
}int cnt=0;
for(int num=0;num<=l;num++)
{
	if(a[num]==1)
	cnt++;	
}
cout<<cnt;
return 0;
}