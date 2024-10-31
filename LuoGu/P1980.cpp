/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/26 下午3:30
* @version: 1.0
* @description: 
********************************************************************************/
#include <iostream>

int main()
{
    int count = 0;
    int n, k;
    std::cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (true)
        {
            if (j % 10 == k)
            {
                count++;
            }
            j /= 10;
            if (j == 0)
            {
                break;
            }
        }
    }

    std::cout << count;
}