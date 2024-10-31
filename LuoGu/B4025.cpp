/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/26 下午11:38
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int x, y;
    std::cin >> x >> y;
    std::cout << gcd(x, y);
}