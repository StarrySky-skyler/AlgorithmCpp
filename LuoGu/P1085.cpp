/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/26 下午3:10
* @version: 1.0
* @description: 
********************************************************************************/
#include <iostream>

int main()
{
    int a, b, sum;
    int maxDay = 0;
    int maxHour = 0;
    for (int i = 1; i <= 7; i++)
    {
        std::cin >> a >> b;
        sum = a + b;
        if (sum > 8 && sum > maxHour)
        {
            maxDay = i;
            maxHour = sum;
        }
    }
    std::cout << maxDay;
}