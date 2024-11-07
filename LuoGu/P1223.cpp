/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/30 上午8:20
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

using namespace std;

bool Compare(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

void Solve()
{
    int n;
    cin >> n;       // 排队人数
    vector<pair<int,int>> queue;
    // 获取输入
    for (int i = 0; i < n; i++)
    {
        pair<int, int> temp;
        cin >> temp.second;
        temp.first = i + 1;
        queue.push_back(temp);
    }
    // 按照second的值升序排列
    sort(queue.begin(), queue.end(), Compare);
    for (int i = 0; i < n; i++)
    {
        cout << queue[i].first << " ";
    }
    cout << endl;
    // 计算平均等待时间
    long long wait = 0;
    for (int i = 0; i < n; i++)
    {
        wait += queue[i].second * (queue.size() - (i + 1));
    }
    // 精确到两位小数
    cout << fixed << setprecision(2) << wait / (double)n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solve();

    return 0;
}
