/*第 1 题｜统计高于平均值的人数
输入 n 个整数，表示每个人的积分。积分可能为负数。输出严格高于平均积分的人数。
- 第一行输入 n（1 ≤ n ≤ 100），第二行输入 n 个积分，每个积分在 -1000 到 1000 之间。
- 在 main() 中读入数据并输出结果，用 int countAboveAvg(int a[], int n) 完成统计。
样例输入
3
-3 -2 -2

样例输出
2

平均值是 \(-7/3\)，两个 -2 都高于平均值。再用 n = 1 测一次，结果应为 0。*/
#include<iostream>
using namespace std;
 int countAboveAvg(int arr[],int n)
 {
 	int avg;int sum=0;int cnt=0;
 	for(int i=0;i<n;i++)
 	{
 		sum+=arr[i];
	 }
	 
	 for(int i=0;i<n;i++)
	 {
	 	if(arr[i]*n>sum)
	 	cnt++;
	 }
	 return cnt;
 }



int main()
{
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
    cin>>a[i];
     cout<<countAboveAvg(a,n);
}


/*第 2 题｜只反转数组的一部分
输入一个数组，将第 l 个到第 r 个元素原地反转，输出整个数组。题目里的位置从 1 开始，包含 l 和 r。
- 第一行输入 n l r（1 ≤ l ≤ r ≤ n ≤ 100），第二行输入 n 个整数。
- 用 void reverseRange(int a[], int l, int r) 修改原数组，然后在 main() 中输出。相邻数字用空格隔开。
样例输入
6 2 5
10 20 30 40 50 60

样例输出
10 50 40 30 20 60*/
#include<iostream>
using namespace std;
void reverseRange(int arr[],int n,int l,int r)
{
//	int i=l;
//	while(i<=r)
//{
//		int t=arr[i];
//		arr[i]=arr[r];
//		arr[r]=t;
//		i++;r--;
//	}

     for(int i=l;i<=r;i++)
	 {
	 	if(i<r)
	 	{
		 int t=arr[i];
		 arr[i]=arr[r];
		 arr[r]=t;
		 r--;
		 }}
}
int main()
{
	int n,l,r;
	cin>>n>>l>>r;
	int a[100];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	reverseRange(a,n,l,r);
	for(int i=1;i<=n;i++)
	cout<<a[i];
	return 0;
}


/*第 3 题｜用两个函数写前缀和
输入 n 个整数和 q 次查询，每次求第 l 个到第 r 个元素的和，包含两端，位置从 1 开始。
- 第一行输入 n q（1 ≤ n, q ≤ 100000）。第二行输入 n 个整数，每个数在 \([-10^9, 10^9]\) 内。接下来 q 行各输入 l r，满足 1 ≤ l ≤ r ≤ n。
- 写一个函数建立前缀和，再写一个函数返回指定区间的和。每次查询输出一行，使用 long long 保存前缀和及结果。
样例输入
5 3
1 -2 3 4 -1
1 3
2 5
4 4

样例输出
2
4
4*/
#include<iostream>
using namespace std;
void frontSum(int arr[],int pre[],int n)
{
	pre[0]=0;
	for(int i=1;i<=n;i++)
	{
		pre[i]=pre[i-1]+arr[i];
	}
}
void printSum(int pre[],int q)
{
	int l,r;
	for(int i=1;i<=q;i++)
	{
		cin>>l>>r;
		cout<<pre[r]-pre[l-1]<<endl;
	}
}
int main()
{
	int n,q;cin>>n>>q;
	int a[100000];int pre[100000];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	frontSum(a,pre,n);
	printSum(pre,q);
	return 0;
}

/*第 4 题｜找总分最低的连续 \(k\) 天
给你连续 \(n\) 天的积分，每天的积分可以是负数。从中选出恰好连续 \(k\) 天，使这 \(k\) 天的积分总和最小。如果有多段总和相同，选开始日期最早的一段。

输入
第一行输入 n k，满足 1 ≤ k ≤ n ≤ 100000。
第二行输入 n 个整数，每个数在 \([-10^9, 10^9]\) 内。

输出
一行输出两个整数，依次是最小总分和开始日期。日期从 1 开始。

样例输入
7 3
4 -2 1 -3 1 -2 5

样例输出
-4 2

第 2～4 天和第 4～6 天总分都是 -4，所以选第 2 天开始。*/
#include<iostream>
using namespace std;
void frontSum(int pre[],int n)
{
	pre[0]=0;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		pre[i]=pre[i-1]+x;
	}
}
void printSum(int pre[],int n,int k)
{
	int r=1;int max=pre[k];
	for(int i=2;i<=n-k+1;i++)
	{
		if(max<pre[i+k-1]-pre[i-1])
		{
			max=pre[i+k-1]-pre[i-1];
			r=i;
		}
	}
	cout<<max<<" "<<r;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int pre[100000];
	frontSum(pre,n);
	printSum(pre,n,k);
	return 0;
	
}








































































