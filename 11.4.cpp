3. (程序题)      2026.11.4
【题目】 霍格沃茨的魔法药剂——杨辉三角
Description
在霍格沃茨的魔药课上，斯内普教授要求你配置一种名为“帕斯卡”的发光药剂。
这种药剂必须在一个 n 层的三角魔法阵中熬制。
魔法阵的规律是：第1层只有1瓶药剂（能量为1），从第2层开始，每一层最左边和最右边的药剂能量恒为1，
而中间的每一瓶药剂，其能量都等于它正上方和左上方两瓶药剂能量之和。
请你输出熬制出的 n 层魔法阵
Input
一行，一个正整数 n（1 ≤ n ≤ 20）。
Output
输出 n 行，代表魔法阵的 n 层。每行的数字之间用空格隔开。
Sample Input
5
Sample Output
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
Hint
对于二维数组 a[i][j]：边界（每行的首尾，即 j=1 或 j=i）赋值为1；中间元素 a[i][j] = a[i-1][j-1] + a[i-1][j]。
#include<iostream>
using namespace std;
int main()
{
  int n;
cin>>n;
 int a[21][21];
for(int i=1;i<=n;i++)
  {for(int j=1;j<=i;j++){
  if(j==1||j==i) a[i][j]=1;
else a[i][j]=a[i-1][j-1]+a[i-1][j];}   
  }for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<a[i][j]<<" ";
    }cout<<endl;
  }return 0;
}
