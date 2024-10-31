/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/26 下午3:26
* @version: 1.0
* @description: 
********************************************************************************/
#include <iostream>

int main()
{
    int k;
    std::cin >> k;

    double sum = 0;
    for(int i = 1;;i++)
    {
        sum += 1.0 / i;
        if (sum > k)
        {
            std::cout << i;
            return 0;
        }
    }
}
