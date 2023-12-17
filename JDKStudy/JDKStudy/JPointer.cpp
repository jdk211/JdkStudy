#include "JPointer.h"
#include <stdio.h>
#include <iostream>

void JPointer::Execute()
{
	int* pInt = return_pInt();

	printf("JPoint return pInt : %d \n", *pInt);
	
	delete pInt;

	int size = 5;
	int* pArr = return_pArray(5);

	for (int i = 0; i < size; ++i)
	{
		printf("return pArray : %d \n", pArr[i]);
	}
	delete pArr;

	//struct
	animal* animalList = new animal[5];

	create_animal(&animalList[0]);
	

	for (int i = 0; i < 5; ++i)
	{
		printf("name : %s, age : %d \n", animalList[i].name, animalList[i].age);
	}
	
	delete[] animalList;
}

int* JPointer::return_pInt()
{
	int* a = new int();
	*a = 2;

	return a;
}

int* JPointer::return_pArray(const int size)
{
	int* arr = new int[size];

	for (int i = 0; i < size; ++i)
	{
		arr[i] = i + 1;
	}

	return &arr[0];
}

void JPointer::create_animal(animal* pAnimal)
{
	std::cout << "Animal Name : " << std::endl;
	std::cin >> pAnimal->name;

	std::cout << "Animal Age : " << std::endl;
	std::cin >> pAnimal->age;

	pAnimal->health = 100;
	pAnimal->food = 100;
	pAnimal->clean = 100;
}
