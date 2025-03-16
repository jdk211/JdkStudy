#pragma once

#include <iostream>
#include "JRef.h"
#include "JPointer.h"
#include "JDate.h"
#include "JGeometry.h"
#include "JMarine.h"
#include "JString.h"
#include "MyString.h"

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
	//namespace 
	//std::cout << "hello, World" << std::endl;
	//NsTest1::foo();
	//OnlyThisFile();
		
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

	//4-3
	//JMarine Marine;
	//Marine.Execute();

	//4-3 Make String
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

	/*4-4*/
	/*JMarine Marine;
	Marine.Execute();*/

	/*4-5*/
	MyString Str("Hello World");
	std::cout << "MyString Lenght : " << Str.Length() << std::endl;
	Str.Print();
	MyString Str1("LongLongLongLong");
	Str1.assign("short");
	Str1.Print();
	MyString Str2("Long Long Long String");
	Str2.reserve(30);

	std::cout << "Capacity : " << Str2.capacity() << std::endl;
	std::cout << "String Length : " << Str2.Length() << std::endl;
	
	char StrAt = Str2.at(2);
	std::cout << "At : " << StrAt << std::endl;

	return 0;
}
