#pragma once
#include "IExecute.h"

class JMarine : public IExecute
{
	int hp;
	int coord_x, coord_y;
	int damage;
	bool is_dead;
	char* name;

public:
	JMarine();
	JMarine(const JMarine& Copy);
	JMarine(int x, int y);
	JMarine(int x, int y, const char* marine_name);
	~JMarine();

	int Attack();
	void Be_Attacked(int damage_earn);
	void Move(int x, int y);

	void Show_Status();

	void Execute() override;
};

