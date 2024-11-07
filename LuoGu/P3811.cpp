/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/11/6 下午4:38
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int exgcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int gcd = exgcd(b, a % b, x, y);
    int temp = x;
    x = y;
    y = temp - a / b * y;
    return gcd;
}

int modInverse(int a, int m) {
    int x, y;
    int gcd = exgcd(a, m, x, y);
    if (gcd!= 1) {
        return -1; // 不存在乘法逆元
    } else {
        return (x % m + m) % m;
    }
}

void Solve()
{
    int n, p;
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
    {
        cout << modInverse(i, p) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solve();

    return 0;
}