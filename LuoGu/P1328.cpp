/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/27 下午4:44
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>

int N, Na, Nb;
int scoreA = 0;
int scoreB = 0;

std::vector<int> roundA;
std::vector<int> roundB;

void GetInput(int type, int n)
{
    for (int i = 0; i < n; i++)
    {
        int input;
        std::cin >> input;
        switch (type)
        {
            case 0:
                roundA.push_back(input);
                break;
            case 1:
                roundB.push_back(input);
                break;
        }
    }
}

void PlayOneRound(int typeA, int typeB, bool reverse = false, int count = 0)
{
    bool tag = false;
    switch (typeA)
    {
        // A出剪刀
        case 0:
            switch (typeB)
            {
                case 1:
                    if (!reverse)
                    {
                        scoreB++;
                    }
                    else
                    {
                        scoreA++;
                    }
                    tag = true;
                    break;
                case 2:
                case 3:
                case 4:
                    if (!reverse)
                    {
                        scoreA++;
                    }
                    else
                    {
                        scoreB++;
                    }
                    tag = true;
                    break;
            }
            break;
            // A出石头
        case 1:
            switch (typeB)
            {
                case 2:
                case 4:
                    if (!reverse)
                    {
                        scoreB++;
                    }
                    else
                    {
                        scoreA++;
                    }
                    tag = true;
                    break;
                case 3:
                    if (!reverse)
                    {
                        scoreA++;
                    }
                    else
                    {
                        scoreB++;
                    }
                    tag = true;
                    break;
            }
            break;
            // A出布
        case 2:
            switch (typeB)
            {
                case 3:
                    if (!reverse)
                    {
                        scoreB++;
                    }
                    else
                    {
                        scoreA++;
                    }
                    tag = true;
                    break;
                case 4:
                    if (!reverse)
                    {
                        scoreA++;
                    }
                    else
                    {
                        scoreB++;
                    }
                    tag = true;
                    break;
            }
            break;
            // A出蜥蜴人
        case 3:
            switch (typeB)
            {
                case 4:
                    if (!reverse)
                    {
                        scoreA++;
                    }
                    else
                    {
                        scoreB++;
                    }
                    tag = true;
                    break;
            }
            break;
    }
    if (!tag && count != 1)
    {
        PlayOneRound(typeB, typeA, true, count + 1);
    }
}

int main()
{
    std::cin >> N >> Na >> Nb;
    GetInput(0, Na);
    GetInput(1, Nb);
    int indexA = 0;
    int indexB = 0;
    for (int i = 0; i < N; i++)
    {
        if (indexA > roundA.size() - 1)
        {
            indexA -= roundA.size();
        }
        if (indexB > roundB.size() - 1)
        {
            indexB -= roundB.size();
        }
        PlayOneRound(roundA[indexA], roundB[indexB]);
        indexA++;
        indexB++;
    }
    std::cout << scoreA << " " << scoreB;
}