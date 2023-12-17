#pragma once
#include "IExecute.h"

typedef struct animal
{
	animal() {};
	animal(char _name[], int _age) { *name = *_name; age = _age; };
	
	char name[30];
	int age;

	int health = 100;
	int food = 100;
	int clean = 100;
} Animal;

typedef unsigned short int UINT16;

class JPointer : public IExecute
{

public:
	void Execute() override;
	
private:
	int* return_pInt();
	int* return_pArray(const int size);
	
	void create_animal(animal* pAnimal);
};

