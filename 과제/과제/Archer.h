#pragma once
#include "player.h"
#include <string>

class Archer :public Player
{
public:
    Archer(string nickname);
    void attack() override;
};