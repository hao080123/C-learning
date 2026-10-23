#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
    int max=0;
    int b=N;
	for(int i=2;i*i<=N;i++){
		int x=N;
		int count =0;
		for(int j=i;x%j==0;j++){      //用来得出连续的因子
			x/=j;
			count ++;             //记录因子的个数 
		}
		if(count > max){
			max =count;         //找出最长的连续因子以及有几个数
			b=i;                //起点的数字
		}	
	} 
	if(max==0) max=1;
	printf("%d\n",max);     // 先打印最长连续因子有几个
	for(int i=0;i<max;i++){
	if(i>0) printf("*");       
		printf("%d",b+i);   //打印出连续因子 在第一个因子上进行累加
}return 0;
	

}