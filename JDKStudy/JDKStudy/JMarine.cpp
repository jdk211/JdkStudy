#include "JMarine.h"
#include <iostream>

int JMarine::total_marine_num = 0;

JMarine::JMarine()
: hp(50), coord_x(0), coord_y(0), 
  default_damage(5), is_dead(false), name(NULL)
{
    // main���� �ϳ� ����...
    //total_marine_num++;
}

JMarine::JMarine(const JMarine& Copy)
: default_damage(Copy.default_damage)
{
    std::cout << "���� ������" << std::endl;

    hp = Copy.hp;
    coord_x = Copy.coord_x;
    coord_y = Copy.coord_y;

    //���� ���� - �ּҸ� �����ϴ� ���̱� ������ Copy ���ڷ� �޾ƿ� ��ü�� �Ҹ�Ǹ� Null pointer �߻�
    //name = Copy.name;

    //���� ���� - �޸𸮸� �������� �Ҵ��Ͽ� ���� ����
    name = new char[strlen(Copy.name) + 1];
    strcpy_s(name, strlen(Copy.name) + 1, Copy.name);
}

JMarine::JMarine(int x, int y)
: hp(50), coord_x(x), coord_y(y),
default_damage(5), is_dead(false), name(NULL)
{
    total_marine_num++;
}

JMarine::JMarine(int x, int y, const char* marine_name)
: default_damage(5)
{
    name = new char[strlen(marine_name) + 1];
    strcpy_s(name, strlen(marine_name) + 1, marine_name);
    
    coord_x = x;
    coord_y = y;
    hp = 50;
    is_dead = false;

    total_marine_num++;
}

JMarine::JMarine(int x, int y, int default_damage)
: coord_x(x), coord_y(y), default_damage(default_damage)
, hp(50), is_dead(false), name(NULL)
{
    total_marine_num++;
}

JMarine::~JMarine()
{
	if (name != NULL)
	{
		std::cout << name << "�Ҹ��� ȣ��" << std::endl;
		delete[] name;
	}

    total_marine_num--;
}

int JMarine::Attack()
{
    return default_damage;
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
    if(name != NULL)
        std::cout << " *** Marine : "<< name << " ***" << std::endl;
    
    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
    std::cout << " HP : " << hp << std::endl;
    std::cout << " ���� �� ���� �� : " << total_marine_num << std::endl;
}

void JMarine::Execute()
{
   /* JMarine marine1(2, 3);
    JMarine marine2(3, 5);

    marine1.Show_Status();
    marine2.Show_Status();

    std::cout << std::endl << "����1 -> ����2 ����!" << std::endl;
    marine2.Be_Attacked(marine1.Attack());

    marine1.Show_Status();
    marine2.Show_Status();*/

    // �迭�� ����
    /*JMarine* marines[100];
    marines[0] = new JMarine(2, 3, "Marine 1");
    marines[1] = new JMarine(3, 5, "Marine 2");

    marines[0]->Show_Status();
    marines[1]->Show_Status();
  
    std::cout << std::endl << "����1 -> ����2 ����!" << std::endl;

    marines[0]->Be_Attacked(marines[1]->Attack());

    marines[0]->Show_Status();
    marines[1]->Show_Status();

    delete marines[0];
    delete marines[1];*/

    // ���� ������
    //JMarine Marine1(3,4, "Marine2");
    //JMarine Marine2(Marine1);
    //JMarine Marine3 = Marine2;
    //
    //Marine1.Show_Status();
    //Marine2.Show_Status();
    //Marine3.Show_Status();

    //Make My String

    //4-3
    JMarine marine1(2, 3);
    JMarine marine2(3, 5);

    marine1.Show_Status();
    marine2.Show_Status();

    std::cout << std::endl << "marine1�� marine2�� ����" << std::endl;

    marine2.Be_Attacked(marine1.Attack());

    marine1.Show_Status();
    marine2.Show_Status();

}
