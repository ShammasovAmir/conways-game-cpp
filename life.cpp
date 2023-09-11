//
// Created by Amir on 11.09.2023.
//
#include <iostream>
using namespace std;

#include "olcConsoleGameEngine.h"

class GameOfLife : public olcConsoleGameEngine
{
public:
    GameOfLife()
    {
        m_sAppName = L"Game of Life";
    }

private:

protected:
    virtual bool OnUserCreate()
    {
        return true;
    }

    virtual bool OnUserUpdate(float elapsedTime)
    {
        return true;
    }
};

int main()
{
    return 0;
}