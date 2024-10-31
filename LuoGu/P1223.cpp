/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/30 上午8:20
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

int peopleCount;
std::vector<int> times;

int main()
{
    std::cin >> peopleCount;
    for (int i = 0; i < peopleCount; i++)
    {
        int t;
        std::cin >> t;
        times.push_back(t);
    }

    //std::sort(times.begin(), times.end());



    int waitTime = 0;
    for (int i = 1; i < peopleCount; i++)
    {
        for (int j = 0; j < i; j++)
        {
            waitTime += times[j];
        }
    }
    printf("%.2lf", (double)waitTime / peopleCount);
}