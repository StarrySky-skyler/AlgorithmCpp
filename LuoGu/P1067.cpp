/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/27 下午3:34
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

int n;
std::vector<int> xiShu;

int main()
{
    // 获取输入
    std::cin >> n;
    for (int i = 0; i < n + 1; i++)
    {
        int input;
        std::cin >> input;
        xiShu.push_back(input);
    }

    for (int i = 0; i < n + 1; i++)
    {
        int currentXiShu = xiShu[i];
        int currentCiShu = n - i;
        if (currentXiShu > 0 && i != 0)
        {
            std::cout << "+";
        }
        else if (currentXiShu == 0)
        {
            continue;
        }
        if (i == n)
        {
            std::cout << currentXiShu;
        }
        else
        {
            if (currentCiShu != 1)
            {
                if (currentXiShu == 1)
                {
                    std::cout << "x^" << currentCiShu;
                }
                else if (currentXiShu == -1)
                {
                    std::cout << "-x^" << currentCiShu;
                }
                else
                {
                    std::cout << currentXiShu << "x^" << currentCiShu;
                }
            }
            else
            {
                if (currentXiShu == 1)
                {
                    std::cout << "x";
                }
                else if (currentXiShu == -1)
                {
                    std::cout << "-x";
                }
                else
                {
                    std::cout << currentXiShu << "x";
                }
            }
        }
    }
}