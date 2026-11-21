/*	统计数位和达标的数	输入 L R K，统计 [L, R] 中数位和等于 K 的整数个数。	10 30 4 → 2（13 和 22）*/
#include<iostream>
using namespace std;
int isPrime(int l,int r,int k)
{
	int cnt=0;
	for(int i=l;i<=r;i++)
	{
		int m=i;int sum=0;
		while(m>0)
		{
			sum=sum+i%10;
			m/=10;
		}
		if(sum==k) cnt++;
	}
	return cnt;
}
int main()
{
	int l,r,k;
	cin>>l>>r>>k;
	cout<<isPrime(l,r,k);
	return 0;
}




/*最大数位和，并列取大	输入 L R，输出数位和最大的整数及其数位和。并列时取较大的整数。	19 28 → 28 10*/
#include<iostream>
using namespace std;
void digitNum(int l,int r)
{
	int max=0;int num=0;
	for(int i=l;i<=r;i++)
	{
		int m=i;int sum=0;
		while(m>0)
		{
			sum+=m%10;
			m/=10;
		}
		if(max<=sum)
		{
			max=sum;
			num=i;
		}
	}cout<<num<<" "<<max;
}
int main()
{
	int l,r;
	cin>>l>>r;
	digitNum(l,r);
	return 0;
}




/*统计回文数	输入 L R，统计区间内正着读和倒着读一样的整数个数。	90 120 → 3（99、`101`、`111`）*/
#include<iostream>
using namespace std;
int countSum(int l,int r)
{
	int cnt=0;
	for(int i=l;i<=r;i++)
	{
		int m=i;int sum=0;
		while(m>0)
		{
			sum=sum*10+m%10;
			m/=10;
		}
		if(sum==i) cnt++;
	}
	return cnt;
}
int main()
{
	int l,r;
	cin>>l>>r;
	cout<<countSum(l,r);
	return 0;
}




/*	质数中的最大数位和	输入 L R，只在区间里的质数中找数位和最大的数，输出这个数和它的数位和。并列取较小的数，没有质数就输出 -1。	10 30 → 29 11
*/
#include<iostream>
using namespace std;
void countSum(int arr[],int k)
{
	if(k==0)
	{
		cout<<-1;
		return ;
	}
	int max=0;int num=0;
	for(int i=0;i<k;i++)
	{
		int t=arr[i];int sum=0;
		while(t>0)
		{
			sum+=t%10;
			t/=10;
		}
		if(max<sum)
		{
			max=sum;
			num=arr[i];
		}
	}
	
	cout<<num<<" "<<max;
}
int main()
{
	int l,r;
	cin>>l>>r;
	int a[100000];int k=0;
	for(int i=l;i<=r;i++)
	{
		if(i<2) continue;
		int m=i;int t=0;int flag=1;
		for(int d=2;d*d<=m;d++)
		{
			if(m%d==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1) 
		{
			a[k]=i;
			k++;
		}
	}

	countSum(a,k);
	return 0;
}




















































