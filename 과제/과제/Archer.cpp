#include "Archer.h"
#include <string>
#include <iostream>
using namespace std;



Archer::Archer(string nickname) :Player(nickname)
{
    job_name = "활잡이";
    cout << "* 활집이로 전직하였습니다." << endl;
    HP = 40;
    MP = 70;
    power = 45;
    defence = 50;
    accuracy = 85;
    speed = 70;
}


/* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */

void Archer::attack()
{
    cout << "활잡이가 활을 발사! " << endl;
}

