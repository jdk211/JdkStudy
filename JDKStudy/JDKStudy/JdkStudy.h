#pragma once

#include <iostream>
#include "JRef.h"
#include "JPointer.h"
#include "JDate.h"
#include "JGeometry.h"
#include "JMarine.h"
#include "JString.h"

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
	//JMarine Marine;
	//Marine.Execute();

	//5-1 Make String
	/*JString StringTest1 = JString('j', 5);
	StringTest1.PrintStr();
	
	JString StringTest2 = JString(StringTest1);
	StringTest2.PrintStr();

	char* str = new char[7 + 1];
	strcpy_s(str, 7 + 1, "JString");
	JString StringTest3 = JString(str);
	StringTest3.PrintStr();
	delete[] str;

	StringTest1.add_string(StringTest3);
	StringTest1.PrintStr();

	StringTest2.copy_string(StringTest1);
	StringTest2.PrintStr();*/



	return 0;
}
