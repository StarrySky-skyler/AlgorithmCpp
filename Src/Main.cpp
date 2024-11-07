/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/11/4 下午10:40
* @version: 1.0
* @description:
********************************************************************************/
#include <iostream>

class Entity
{
public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity
{
public:
    const char *Name;

    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

void Main()
{
    Player player;
    player.Name = "player";
    player.PrintName();
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    Main();

    return 0;
}