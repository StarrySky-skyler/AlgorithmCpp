/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/11/4 下午10:40
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

typedef long long LL;

using namespace std;

void Solve()
{
    // 获取输入
    int pathLength;
    cin >> pathLength;
    vector<int> path(pathLength);
    for (int i = 0; i < pathLength; i++)
    {
        cin >> path[i];
    }

    LL ans = 0;
    for (int i = 1; i < pathLength; i++)
    {
        if (path[i] > path[i - 1])
        {
            ans += path[i] - path[i - 1];
        }
    }
    ans += path[0];
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solve();

    return 0;
}