#include "Thief.h"
#include <string>
#include <iostream>
using namespace std;



Thief::Thief(string nickname) :Player(nickname)
{
    job_name = "도둑";
    cout << "* 도둑로 전직하였습니다." << endl;
    HP = 20;
    MP = 40;
    power = 40;
    defence = 20;
    accuracy = 90;
    speed = 80;
}


/* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */

void Thief::attack()
{
    cout << "도둑(이)가 돈(아이템)을 훔쳤습니다 " << endl;
}

