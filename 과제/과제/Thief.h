#pragma once
#include "player.h"
#include <string>

class Thief :public Player
{
public:
    Thief(string nickname);
    void attack() override;
};