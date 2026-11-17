/*1. 求数组最大值（课堂题）

函数： int findMax(int arr[], int n)
要求： 找出并返回数组中的最大值。
样例： 输入 5 / 100 500 300 900 200 → 输出 900
要点： 擂台法，初始值用 arr[0]，不要设成 0。*/
#include<iostream>
using namespace std;
int findMax(int arr[],int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	if(max<arr[i]) max=arr[i];
    return max;
}


int main()

{

	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int t= findMax(a,n);
	cout<<t;
	return 0; }
	
	
	
/*. 求数组最小值的下标

函数： int findMinIndex(int arr[], int n)
要求： 返回最小值第一次出现的下标（从 0 开始）。
样例： 输入 5 / 300 100 500 100 200 → 输出 1
要点： 同时记录最小值和下标；用严格小于 <，相等时不更新，才能保证是第一次出现。*/
	#include<iostream>
	using namespace std;
	int findMinIndex(int arr[],int n)
	{
		int min=arr[0];
		int MinIndex=0;
		for(int i=0;i<n;i++)
		if(min>arr[i])
		{
		min=arr[i];
		MinIndex=i;}
	    return MinIndex;
	}
		int main()
	{
		int n;
		cin>>n;
		int a[100];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findMinIndex(a,n);
	}*/
	
	
	
/*3. 统计大于平均值的个数

函数： int countAboveAvg(int arr[], int n)
要求： 统计数组中大于平均值的元素个数。
样例： 输入 5 / 10 20 30 40 50 → 输出 2
要点： 先求和，再算 double avg = (double)sum / n;，最后再遍历统计。注意避免整数除法丢失小数。*/
	#include<iostream>
	using namespace std;
	int countAboveAvg(int arr[],int n)
	{
		int sum=0;
	    for(int i=0;i<n;i++)
	    sum+=arr[i];
	    int avg=sum/n;
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	    	if(arr[i]>avg)
	    	{
	    		cnt++;
			}
		}
		return cnt;
	}
	int main()
	{
		int n;
		cin>>n;
		int a[100];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<countAboveAvg(a,n);
	}
	
	
/*4. 数组元素反转

函数： void reverseArr(int arr[], int n)
要求： 把数组前后倒置，直接修改原数组，在 main 中输出。
样例： 输入 5 / 1 2 3 4 5 → 输出 5 4 3 2 1
要点： 双下标 i、j 从两头往中间交换，while (i < j)；void 函数不能放进 cout*/
#include<iostream>
	using namespace std;
	void reverseArr(int arr[],int n)
	{
		int i=0,j=n-1;
		while(i<j)
		{
			int t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
			i++;j--;
		}
		
	}
        int main()
	{
		int n;cin>>n;
		int a[100];
		for(int i=0;i<n;i++)
		cin>>a[i];
		reverseArr(a,n);
		for(int i=0;i<n;i++)
		cout<<a[i];
	    return 0;
	}
	
	
	
	
	
/*	5. 判断数组是否有序

函数： int isSorted(int arr[], int n)
要求： 数组按从小到大（非递减）排列返回 1，否则返回 0。
样例： 1 2 2 4 5 → 1；1 3 2 4 5 → 0
要点： 发现 arr[i] < arr[i-1] 就提前 return 0；走完循环再 return 1；相等算有序。*/
#include<iostream>
	using namespace std;
    int isSorted(int arr[],int n)
	{
		for(int i=1;i<n;i++)
		if(arr[i]<arr[i-1])
		return 0;
		return 1;
	 } 

	int main()
	{
		int n;cin>>n;
		int a[100];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<isSorted(a,n);
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	