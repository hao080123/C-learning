/*仓库初始有 s 件商品，接下来依次处理 n 条记录。每条记录是一个非零整数 x。
- x > 0 时，入库 x 件商品。
- x < 0 时，尝试出库 -x 件商品。库存足够就扣除，库存不足就拒绝整笔操作，库存保持原样。库存恰好够时可以出库。
求处理完后的库存，以及被拒绝的次数。

输入格式　第一行输入 n 和 s。第二行输入 n 个整数，表示按顺序处理的记录。
输出格式　输出一行，依次为最终库存和拒绝次数，用空格分隔。
数据范围　1 ≤ n ≤ 1000，`0 ≤ s ≤ 1000`，`-1000 ≤ x ≤ 1000`，且 x ≠ 0。

样例输入
4 5
-3 -4 6 -8

样例输出
0 1*/
#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	int a[1000];
	int count=0;
	int t[1000];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	t[i]=-a[i];}
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			s+=a[i];
		}
		else if(t[i]<=s)
		{
			s-=t[i];
		}
		else count++;
			
		
	} 
	cout<<s<<" "<<count;
	return 0;
}



/*第 2 题 · 和为指定值的数对（基础，建议 20～25 分钟）

给定 n 个整数和目标值 k，统计有多少对位置 i, j 满足 i < j 且两个位置上的数之和等于 k。按位置计数，所以数值相同的两个元素也可以配对，只要位置不同。

输入格式　第一行输入 n 和 k。第二行输入 n 个整数。
输出格式　输出符合条件的数对个数。
数据范围　1 ≤ n ≤ 1000，每个数在 -1000～1000 之间，`-2000 ≤ k ≤ 2000`。

样例输入
6 6
1 3 3 5 2 4

样例输出*/
#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int count=0;
	int a[1000];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			count++;
		}
	}cout<<count;
	return 0;
}

/*连续 k 天的最佳积分（可选提高，25～35 分钟）

从 n 天中选出恰好连续 k 天，使积分总和最大。如果有多段并列，选择起始日期最早的一段。日期从 1 开始编号。

输入格式　第一行输入 n 和 k。第二行输入 n 个整数，表示每天的积分。
输出格式　输出一行，依次为最大积分总和与起始日期，用空格分隔。
数据范围　1 ≤ k ≤ n ≤ 200000，每天的积分在 -1000000～1000000 之间。

样例输入
5 2
-5 -2 -3 -2 -3

样例输出
-5 2*/

提示　这次数据更大。枚举每段的起点，用前缀和直接得到这一段的总分。前缀和和答案都用 long long。用第一段的实际总分初始化最大值，因为所有区间和都可能是负数。
#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[1000];
	int max=0;
	int num=1;
	for(int i=1;i<=n;i++) 
	cin>>a[i];
	for(int i=1;i<=4;i++) 
	max+=a[i];
	for(int i=2;i+k-1<=n;i++)
	{
		int t=0;
		for(int j=i;j<i+k;j++)
		{
			
			t+=a[j];
			
		}
		if(t>max)
		{
			max=t;
			num=i;
		}
	}
	cout<<max<<" "<<num;
	return 0;
}
































































