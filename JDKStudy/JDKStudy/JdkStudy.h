#pragma once

#include <iostream>
#include "JRef.h"
#include "JPointer.h"
#include "JDate.h"
#include "JGeometry.h"
#include "JMarine.h"

//using namespace std; 
//�̸��� ��ġ�� �Լ��� ���� �� �ֱ� ������ �������� ���� 
//����ϴ� ���� ����
namespace NsTest1 {
	void foo() { std::cout << "NsTest1 foo()" << std::endl; }
}

namespace {
	void OnlyThisFile() { std::cout << "Only Can Use In Here!" << std::endl; }

	//�̸� ���� namespace�� static �Լ��� ���� ȿ���� ���´�
	//�� ���� �������� ��� �����ϴ�
}

int main()
{
	std::cout << "hello, World" << std::endl;
	NsTest1::foo();
	OnlyThisFile();
		
	//���۷��� ����
	//JRef ref;
	//ref.Execute();

	//������ ����
	//JPointer Jptr;
	//Jptr.Execute();

	//4-1 ��ü
	//JDate date;
	//date.Execute();

	//4-2 �������̵�, ������
	//JDate date2(); X
	//JDate date2 = JDate();
	//date.Execute();

	//4-2 
	//JGeometry Geo = JGeometry();
	//Geo.Execute();

	//5-1
	JMarine Marine;
	Marine.Execute();

	return 0;
}
