## 第一题　螺旋迷宫

### 题目描述

造梦师阿丽亚德妮需要画一个 n × n 的螺旋迷宫图纸。

数字从 1 开始，按顺时针方向从外向内螺旋填入矩阵。请输出这个迷宫。

### 输入格式

一行，一个正整数 n（1 ≤ n ≤ 100）。

### 输出格式

输出 n 行，每行 n 个整数，为填好的螺旋矩阵。

### 输入样例

```text
3
```

### 输出样例

```text
1 2 3
8 9 4
7 6 5
```

### C++ 代码

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[101][101];
    int count = 1;
    int top = 1, bottom = n;
    int left = 1, right = n;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            a[top][i] = count++;
        top++;

        for (int i = top; i <= bottom; i++)
            a[i][right] = count++;
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                a[bottom][i] = count++;
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                a[i][left] = count++;
            left++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > 1) cout << " ";
            cout << a[i][j];
        }
        cout << '\n';
    }

    return 0;
}
```

## 第二题　像素密码门——图像旋转

### 题目描述

玩家“史蒂夫”在地下遗迹发现了一扇由 n × n 个方块组成的像素密码门。

门旁边写着提示，“只有将整幅图案顺时针旋转 90 度，通向宝藏的门才会打开”。

请你编写程序，帮史蒂夫算出旋转后的开门密码。

### 输入格式

第一行，一个正整数 n（1 ≤ n ≤ 100）。

接下来 n 行，每行 n 个整数（0 或 1），代表像素门的图案。

原题样例使用了 1～9，下面保留原样例，代码也支持这些整数。

### 输出格式

输出旋转后的 n 行 n 列矩阵。

### 输入样例

```text
3
1 2 3
4 5 6
7 8 9
```

### 输出样例

```text
7 4 1
8 5 2
9 6 3
```

### C++ 代码

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[101][101], b[101][101];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            b[j][n + 1 - i] = a[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > 1) cout << " ";
            cout << b[i][j];
        }
        cout << '\n';
    }

    return 0;
}
```
