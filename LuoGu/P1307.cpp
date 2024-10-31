/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/26 下午4:35
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

using namespace std;

string output;

void OutputNum(int x)
{
    output.append(to_string(x % 10));
    if (x / 10 != 0)
    {
        OutputNum(x / 10);
    }
}

int main()
{
    int N;
    cin >> N;
    if (N < 0)
    {
        N = -N;
        cout << "-";
    }
    OutputNum(N);
    int ot = stoi(output);
    cout << ot;
}
