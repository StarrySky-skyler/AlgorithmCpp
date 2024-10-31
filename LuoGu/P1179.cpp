/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/27 下午4:19
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

// 获取数字的位数
int GetWeiShu(int num)
{
    int count = 0;
    do
    {
        count++;
        num /= 10;
    } while (num != 0);
    return count;
}

int main()
{
    int L, R;
    int count = 0;
    std::cin >> L >> R;

    int weiShu = GetWeiShu(L);

    int geWei = L / 10 * 10 + 2;
    while (true)
    {
        if (geWei >= L && geWei <= R)
        {
            count++;
        }
        else
        {
            break;
        }
        geWei += 10;
    }
}