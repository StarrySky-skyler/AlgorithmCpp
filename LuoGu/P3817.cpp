/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/11/4 下午1:14
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

typedef long long LL;

using namespace std;

void Solve()
{
    int n;
    long long x;
    cin >> n >> x;
    vector<LL> candies(n);
    for (int i = 0; i < n; i++)
    {
        cin >> candies[i];
    }

    LL answer = 0LL;
    for (int i = 1; i < n; i++)
    {
        LL sum = candies[i - 1] + candies[i];
        LL cha = sum - x;

        if (cha > 0)
        {
            answer += cha;
            if (candies[i] >= cha)
            {
                candies[i] -= cha;
            }
            else
            {
                candies[i - 1] -= cha - candies[i];
                candies[i] = 0;
            }
        }
    }

    cout << answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solve();

    return 0;
}