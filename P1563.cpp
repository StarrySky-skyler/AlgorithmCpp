/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/28 下午10:24
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

int peopleCount, commandCount;

// 玩具人
class People
{
public:
    // 朝向，0为朝内，1为朝外
    int towards;
    std::string name;
};

// 指令
class Command
{
public:
    // 方向，0为向左数，1为向右数
    int direction;
    // 数的个数
    int number;
};

// 玩具人集合，逆时针存储
std::vector<People> peoples;

// 指令集合
std::vector<Command> commands;

void CorrectIndex(int &index, int &count)
{
    if (index < 0)
    {
        index += count;
    }
    else if (index >= count)
    {
        index -= count;
    }
}

int main()
{
    // 获取输入
    std::cin >> peopleCount >> commandCount;
    for (int i = 0; i < peopleCount; i++)
    {
        People p;
        int towards;
        std::string name;
        std::cin >> towards >> name;
        p.towards = towards;
        p.name = name;
        peoples.push_back(p);
    }
    for (int i = 0; i < commandCount; i++)
    {
        Command cmd;
        int direction;
        int num;
        std::cin >> direction >> num;
        cmd.direction = direction;
        cmd.number = num;
        commands.push_back(cmd);
    }

    int targetPeopleIndex = 0;
    People targetPeople = peoples[targetPeopleIndex];
    // 执行指令
    for (Command cmd : commands)
    {
        if (targetPeople.towards ^ cmd.direction)
        {
            targetPeopleIndex += cmd.number;
            CorrectIndex(targetPeopleIndex, peopleCount);
            targetPeople = peoples[targetPeopleIndex];
        }
        else
        {
            targetPeopleIndex -= cmd.number;
            CorrectIndex(targetPeopleIndex, peopleCount);
            targetPeople = peoples[targetPeopleIndex];
        }
    }

    std::cout << targetPeople.name << std::endl;
    return 0;
}