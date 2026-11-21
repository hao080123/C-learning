/*#include<iostream>
using namespace std;
int isPrime(int L,int R)
{
	int cnt=0;
	for(int i=L;i<=R;i++)
	{
	    int flag=1;
		if(i<2) continue;
		for(int d=2;d*d<=i;d++)
		{
			if(i%d==0)
		{
			flag=0;
			break;
			}
			
		}if(flag==1) cnt++;
	}
	return cnt;
}
int main()
{
	int L,R;cin>>L>>R;
		int t=isPrime(L,R);
		cout<<t;
	return 0;
}*/



/*#include<iostream>
using namespace std;
void digitSum(int l,int r,int num)
{
	int max=0;
	for(int i=l;i<=r;i++)
	{
		int sum=0; int m=i;
		while(m>0)
		{
			sum=sum+m%10;
			m/=10;
			
		}
		if(max<sum) {
		max=sum;num=i;}
		
	}
	cout<<num<<"  "<<max;
}
int main()
{
	int l,r,num;
	cin>>l>>r;
    digitSum(l,r,num);
	return 0;
}*/





#include<iostream>
using namespace std;
void checkNum(int k)
{
	if(k%2==0) cout<<"Even";
	else cout<<"Odd";
}



int main()
{
	int k;cin>>k;
	checkNum(k);
	return 0;
}




























































