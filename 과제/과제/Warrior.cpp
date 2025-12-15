#include "Warrior.h"
#include <string>
#include <iostream>
using namespace std;



Warrior::Warrior(string nickname) :Player(nickname)
{
    job_name = "전사";
    cout << "* 전사로 전직하였습니다." << endl;
    HP = 100;
    MP = 0;
    power = 40;
    defence = 80;
    accuracy = 60;
    speed = 30;
}


        /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */
    
    void Warrior::attack()
    {
        cout << "전사가 검을 휘둘렀습니다 " << endl;
    }
   
