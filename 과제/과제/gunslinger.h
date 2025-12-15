#pragma once
#include "player.h"
#include <string>

class gunslinger :public Player
{
public:
    gunslinger(string nickname);
    void attack() override;
};