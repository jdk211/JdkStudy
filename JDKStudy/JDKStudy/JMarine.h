#pragma once
#include "IExecute.h"

class JMarine : public IExecute
{
	static int total_marine_num;
	
	int hp;
	int coord_x, coord_y;
	bool is_dead;
	char* name;

	const int default_damage;

public:
	JMarine();
	JMarine(const JMarine& Copy);
	JMarine(int x, int y);
	JMarine(int x, int y, int default_damage);
	JMarine(int x, int y, const char* marine_name);
	~JMarine();

	int Attack();
	void Be_Attacked(int damage_earn);
	void Move(int x, int y);

	void Show_Status();

	void Execute() override;
};

