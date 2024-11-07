/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/11/5 下午9:10
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

typedef long long LL;

using namespace std;

bool Compare(pair<int, LL> a, pair<int, LL> b)
{
    return a.first < b.first;
}

void Solve()
{
    LL milkNeed;
    int farmerCount;
    // 获取输入
    cin >> milkNeed >> farmerCount;
    vector<pair<int, LL>> farmers(farmerCount);

    // 获取每位奶农的供价
    for (int i = 0; i < farmerCount; i++)
    {
        pair<int, LL> temp;
        cin >> temp.first >> temp.second;
        farmers.push_back(temp);
    }

    sort(farmers.begin(), farmers.end(), Compare);
    LL money = 0;
    for (pair<int, LL> i : farmers)
    {
        if (milkNeed >= i.second)
        {
            money += i.first * i.second;
            milkNeed -= i.second;
        }
        else
        {
            money += i.first * milkNeed;
            break;
        }
    }
    cout << money;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solve();

    return 0;
}