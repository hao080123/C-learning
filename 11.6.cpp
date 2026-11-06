//第 1 题：字符分类统计（基础）

输入一个仅包含英文字母和数字的字符串，分别统计其中大写字母、小写字母和数字的个数。

**输入格式：**一行，一个字符串 s。
**输出格式：**一行，依次输出大写字母、小写字母、数字的个数，用空格分隔。
数据范围：`1 ≤ 字符串长度 ≤ 1000`。

输入样例：
SQU2026abcZ

输出样例：
4 3 4

建议用时：15～20 分钟。
提示：遍历字符串，判断每个字符属于哪个范围。
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int count1=0,count2=0,count3=0;
   int n=s.size();
   for(int i=0;i<n;i++)
   {
   	if(s[i]>='0'&&s[i]<='9') count1++;
   	if(s[i]>='A'&&s[i]<='Z') count2++;
   	if(s[i]>='a'&&s[i]<='z') count3++;
   }
   cout<<count1<<" "<<count2<<" "<<count3;
   return 0;	
}*/



//第 2 题：判断回文串（基础）

如果一个字符串从左往右读和从右往左读完全相同，就称为回文串。输入一个仅包含小写英文字母的字符串，判断它是否为回文串。

**输入格式：**一行，一个字符串 s。
**输出格式：**是回文串输出 YES，否则输出 NO。
数据范围：`1 ≤ 字符串长度 ≤ 1000`。

输入样例 1：
level

输出样例 1：
YES

输入样例 2：
abca

输出样例 2：
NO

建议用时：20～25 分钟。
提示：比较 s[i] 和 s[n - 1 - i]，只要有一对不同，就不是回文串。
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flag=1;
	int n=s.size();
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]!=s[n-1-i])
		{
			flag=0;
			break;
		}
	}if(flag==1) cout<<"YES";
	if(flag==0) cout<<"NO";
	return 0;
}*/






//第 3 题：最长连续相同字符（提高）

输入一个仅包含小写英文字母的字符串，找出连续相同字符的最长一段，输出对应字符和长度。如果有多段并列最长，输出最先出现的那一段。

**输入格式：**一行，一个字符串 s。
**输出格式：**一行，输出字符和长度，用空格分隔。
数据范围：`1 ≤ 字符串长度 ≤ 1000`。

输入样例 1：
aabbbccddddaa

输出样例 1：
d 4

输入样例 2：
aabb

输出样例 2：
a 2

建议用时：25～35 分钟。
提示：分别记录当前连续长度和历史最长长度，只有更长时才更新。

**你刚才讨论的扩展要求：**输出所有并列最长段对应的字符，同一个字符只输出一次，按符合条件的段从左到右出现的顺序输出。

扩展版输入：
aabbaacc

扩展版输出：
a 2
b 2
c 2
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=1;
	int maxlen=1;
	char ans=s[0];
	int n=s.size();
	for(int i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		count++;
		else count=1;
		if(count>maxlen) 
		{
			maxlen=count;
			ans=s[i];
		
	}
		}cout<<ans<<" "<<count;
		return 0;
}*/

//要输出每一个最长长度的字符 且不能重复输出
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    int count = 1;
    int maxLen = 1;

    // 第一遍：找到最长连续长度
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (count > maxLen)
        {
            maxLen = count;
        }
    }

    // 记录每个字母是否已经输出，初始全部为false
    bool printed[26] = {false};

    count = 0;

    // 第二遍：输出所有并列最长的字符，同一字符只输出一次
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || s[i] != s[i - 1])
        {
            count = 1;
        }
        else
        {
            count++;
        }

        int index = s[i] - 'a';

        if (count == maxLen && printed[index] == false)
        {
            cout << s[i] << " " << maxLen << endl;
            printed[index] = true;
        }
    }

    return 0;
}*/














































































