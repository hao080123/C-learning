//将成绩从小到大输出
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100];                                           
	for(int i=0;i<n;i++)                                  
	cin>>a[i];                                            
	int max=a[0];
	for(int d=0;d<n-1;d++)
	{
	for(int i=0;i<n-d-1;i++)
	{
		if(a[i]>a[i+1])
		{
			int t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}








//输入n个整数 将重复的数字去掉 按从小到大的顺序输出 并输出不同数字的个数
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int d=0;d<n-1;d++)
    {
	for(int i=0;i<n-1-d;i++)
	{
		if(a[i]>a[i+1])
		{
			int t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
}
int count=1;
	for(int i=0;i<n-1;i++)
	{
	  if(a[i]!=a[i+1])
	  count++;	
	}cout<<count<<endl;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		cout<<a[i]<<" ";
	}
	return 0;
}





//输入n个整数 从不同位置选出两个数 使它们的差的绝对值最小 选择较小的那个数最小的一组
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int d=0;d<n-1;d++)
	{
		for(int i=1;i<n-d;i++)
		{
			if(a[i]<a[i-1])
			{
				int t=a[i-1];
				a[i-1]=a[i];
				a[i]=t;
			}
		}
	}
	int b[1000];
	for(int i=1;i<n;i++)
	{
		b[i]=a[i]-a[i-1];
	}
	int min=b[1];
	int r=1;int j=0;
	for(int i=1;i<n;i++)
	{
		if(b[i]<min)
		{
			min=b[i];
			 r=i;
			 j=i-1;
		}
	}
	cout<<min<<endl;
	cout<<a[j]<<" "<<a[r];
	return 0;
}






































































