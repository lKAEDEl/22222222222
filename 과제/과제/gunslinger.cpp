#include "gunslinger.h"
#include <string>
#include <iostream>
using namespace std;



gunslinger::gunslinger(string nickname) :Player(nickname)
{
    job_name = "총잡이";
    cout << "* 총잡이로 전직하였습니다." << endl;
    HP = 50;
    MP = 60;
    power = 55;
    defence = 30;
    accuracy = 65;
    speed = 45;
}


/* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */

void gunslinger::attack()
{
    cout << "총잡이가 총을 발사! " << endl;
}

