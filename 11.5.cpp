输入n个0~9的整数 统计每个数字出现的次数 2026.11.5
#include<iostream>
 using namespace std;
  int main()
  {
  	int n;
  	cin>>n;
  	int a[100];
  	int x;
    int count[10]={0};
    for(int i=0;i<n;i++)
	{
		cin>>x;
		count[x]++;
	   }   
   for(int i=0;i<n;i++)
   cout<<i<<count[i]<<endl;
   return 0;
   
   }
   
