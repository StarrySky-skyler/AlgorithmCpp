/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/26 下午7:50
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

struct DiTan
{
    int startX, endX, startY, endY;
};

bool IsOnDiTan(struct DiTan diTan, int x, int y)
{
    return x >= diTan.startX && x <= diTan.endX && y >= diTan.startY && y <= diTan.endY;
}

int main()
{
    int diTanCounts, x, y, width, height, targetX, targetY;
    std::cin >> diTanCounts;
    DiTan diTans[diTanCounts];
    for (int i = 0; i < diTanCounts; i++)
    {
        std::cin >> x >> y >> width >> height;
        DiTan d{};
        d.startX = x;
        d.startY = y;
        d.endX = x + width;
        d.endY = y + height;
        diTans[i] = d;
    }
    std::cin >> targetX >> targetY;
    int j = -1;
    for (int i = 0; i < diTanCounts; i++)
    {
        if (IsOnDiTan(diTans[i], targetX, targetY))
        {
            j = i + 1;
        }
    }
    std::cout << j;
}