#include "JMarine.h"
#include <iostream>

JMarine::JMarine()
{
    hp = 50;
    coord_x = coord_y = 0;
    damage = 0;
    is_dead = false;
    name = NULL;
}

JMarine::JMarine(int x, int y)
{
    coord_x = x;
    coord_y = y;
    hp = 50;
    damage = 5;
    is_dead = false;
    name = NULL;
}

JMarine::JMarine(int x, int y, const char* marine_name)
{
    name = new char[strlen(marine_name + 1)];
    strcpy_s(name, strlen(marine_name + 1), marine_name);
    
    coord_x = x;
    coord_y = y;
    hp = 50;
    damage = 5;
    is_dead = false;
}

int JMarine::Attack()
{
    return damage;
}

void JMarine::Be_Attacked(int damage_earn)
{
    hp -= damage_earn;
    if(hp <= 0) is_dead = true;
}

void JMarine::Move(int x, int y)
{
    coord_x = x;
    coord_y = y;
}

void JMarine::Show_Status()
{
    std::cout << " *** Marine : "<< name << " ***" << std::endl;
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
    std::cout << " HP : " << hp << std::endl;
}

void JMarine::Execute()
{
   /* JMarine marine1(2, 3);
    JMarine marine2(3, 5);

    marine1.Show_Status();
    marine2.Show_Status();

    std::cout << std::endl << "마린1 -> 마린2 공격!" << std::endl;
    marine2.Be_Attacked(marine1.Attack());

    marine1.Show_Status();
    marine2.Show_Status();*/

    // 배열로 정리
    JMarine* marines[100];
    marines[0] = new JMarine(2, 3, "Marine 1");
    marines[1] = new JMarine(3, 5, "Marine 2");

    marines[0]->Show_Status();
    marines[1]->Show_Status();
  
    std::cout << std::endl << "마린1 -> 마린2 공격!" << std::endl;

    marines[0]->Be_Attacked(marines[1]->Attack());

    marines[0]->Show_Status();
    marines[1]->Show_Status();

    delete marines[0];
    delete marines[1];
    //git Test 
}
