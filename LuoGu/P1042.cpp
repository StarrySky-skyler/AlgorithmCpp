/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/26 下午8:45
* @version: 1.0
* @description: 
********************************************************************************/
//stone_juice石汁 P1042 乒乓球
#include <bits/stdc++.h>

int win[62503];
int w, l;

int main()
{
    char s;
    for (int i = 1; std::cin >> s && s != 'E'; i++)//循环读入，当读到字符E结束
    {
        if (s == 'W')win[i] = 1;
        else win[i] = 2;
    }
    //----------------11分制 ----------------
    for (int i = 1; 1; i++)
    {
        switch (win[i])
        {
            case 1:
                w++;
                break;
            case 2:
                l++;
                break;
            case 0:
                std::cout << w << ":" << l << std::endl << std::endl;
                goto end;
                break;
        }
        if (abs(w - l) >= 2)
            if (w >= 11 || l >= 11)//当双方比分相差大于2且一方分数大等于11输出
            {
                std::cout << w << ":" << l << std::endl;
                w = 0;//比分清零
                l = 0;
            }
    }
    end:
    w = 0;//清零，为21分制计算做准备
    l = 0;
    //----------------21分制 ----------------
    for (int i = 1; 1; i++)//一切同上，唯一区别就是判定从11变为21
    {
        switch (win[i])
        {
            case 1:
                w++;
                break;
            case 2:
                l++;
                break;
            case 0:
                std::cout << w << ":" << l;
                goto endpoint;
        }
        if (abs(w - l) >= 2)
            if (w >= 21 || l >= 21)//11变为21
            {
                std::cout << w << ":" << l << std::endl;
                w = 0;
                l = 0;
            }
    }
    endpoint:
    return 0;//华丽地结束  ㄟ(▔▽▔)ㄏ
}