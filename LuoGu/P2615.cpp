/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/29 下午4:34
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

int N;

int main()
{
    std::cin >> N;

    std::vector<std::vector<int>> magicRounds(N, std::vector<int>(N));
    int jX = 0; // 行
    int jY = (N - 1) / 2;   // 列
    bool onFirstLine;
    bool onLastColumn;
    magicRounds[jX][jY] = 1; // 初始化第一行的中间元素为1

    for (int k = 2; k <= (N * N); k++)
    {
        onFirstLine = jX == 0;
        onLastColumn = jY == N - 1;
        if (onFirstLine && !onLastColumn)
        {
            magicRounds[N - 1][jY + 1] = k;
            jX = N - 1;
            jY += 1;
        }
        else if (onLastColumn && !onFirstLine)
        {
            magicRounds[jX - 1][0] = k;
            jX -= 1;
            jY = 0;
        }
        else if (onFirstLine && onLastColumn)
        {
            magicRounds[jX + 1][jY] = k;
            jX += 1;
        }
        else
        {
            if (magicRounds[jX - 1][jY + 1] == 0)
            {
                magicRounds[jX - 1][jY + 1] = k;
                jX -= 1;
                jY += 1;
            }
            else
            {
                magicRounds[jX + 1][jY] = k;
                jX += 1;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << magicRounds[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}