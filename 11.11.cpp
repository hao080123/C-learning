给定 n 天的训练积分，第 1 天到第 n 天依次编号。每次给出两个整数 l 和 r，求第 l 天到第 r 天的积分总和，包含两端。每天的积分可以为负数。

输入格式　第一行输入 n 和 q，分别表示天数和查询次数。第二行输入 n 个整数，表示每天的积分。接下来 q 行，每行输入 l 和 r。
输出格式　每次查询输出一行，表示这段区间的积分总和。
数据范围　1 ≤ n, q ≤ 100000，`1 ≤ l ≤ r ≤ n`，每天的积分在 -10000～10000 之间。

样例输入
5 3
3 -2 7 0 4
1 3
2 5
4 4

样例输出
8
9
0

提示　用 pre[i] 保存前 i 天的积分总和，先设 pre[0] = 0。手算样例 2 5 时，想想该从 pre[5] 里减掉哪部分。
#include<iostream>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int a[100001];
	int pre[100001];
 pre[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		pre[i]=pre[i-1]+a[i];
	}
	for(int i=0;i<q;i++)
	{
		int l,r;
		cin>>l>>r;
		cout<<pre[r]-pre[l-1]<<endl;
	}

	return 0;
}



给定 n 天的刷题数量。一天完成至少 k 道题就算达标。每次查询给出 l 和 r，求第 l 天到第 r 天共有多少天达标，包含两端。

输入格式　第一行输入 n、`q`、`k`。第二行输入 n 个整数，表示每天完成的题数。接下来 q 行，每行输入 l 和 r。
输出格式　每次查询输出一行，表示区间内的达标天数。
数据范围　1 ≤ n, q ≤ 100000，`1 ≤ l ≤ r ≤ n`，`0 ≤ k ≤ 1000`，每天完成的题数在 0～1000 之间。

样例输入
6 3 3
2 3 5 1 3 0
1 6
2 4
4 4

样例输出
3
2
0

提示　把达标的一天记为 1，其余记为 0，再做前缀和。完成题数恰好等于 k 也算达标。
#include<iostream>
using namespace std;
int main()
{

	int n,q,k;
	cin>>n>>q>>k;
	
	int pre[100001];
    pre[0]=0;
	int x,l,r;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x>=k) pre[i]=pre[i-1]+1;
		else pre[i]=pre[i-1];
	 } 
	
	
	for(int i=0;i<q;i++)
	{
		cin>>l>>r;
		cout<<pre[r]-pre[l-1]<<endl;
	}																												                                                                                                                   
	return 0;
}








从 n 天中选出恰好连续 k 天，使积分总和最大。如果有多段并列，选择起始日期最早的一段。日期从 1 开始编号。

输入格式　第一行输入 n 和 k。第二行输入 n 个整数，表示每天的积分。
输出格式　输出一行，依次为最大积分总和与起始日期，用空格分隔。
数据范围　1 ≤ k ≤ n ≤ 200000，每天的积分在 -1000000～1000000 之间。

样例输入
5 2
-5 -2 -3 -2 -3

样例输出
-5 2

提示　这次数据更大。枚举每段的起点，用前缀和直接得到这一段的总分。前缀和和答案都用 long long。用第一段的实际总分初始化最大值，因为所有区间和都可能是负数
#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;int x;
	int pre[100000];
	pre[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		pre[i]=pre[i-1]+x;
	}
	int l,r;
	
	int bestsum=pre[k];
	int num=1;int sum=0;
	for(int l=2;l+k-1<=n;l++)
	{
		r=l+k-1;
		sum=pre[r]-pre[l-1];
		if(sum>bestsum)
		{
			bestsum=sum;
			num=l;
		}
	}
	cout<<bestsum<<" "<<num;
	return 0;
}



































