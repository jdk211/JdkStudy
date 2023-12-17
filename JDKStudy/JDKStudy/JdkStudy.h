#pragma once

#include <iostream>
#include "JRef.h"
#include "JPointer.h"
#include "JDate.h"
#include "JGeometry.h"
#include "JMarine.h"

//using namespace std; 
//이름이 겹치는 함수를 만들 수 있기 때문에 권장하지 않음 
//명시하는 것을 지향
namespace NsTest1 {
	void foo() { std::cout << "NsTest1 foo()" << std::endl; }
}

namespace {
	void OnlyThisFile() { std::cout << "Only Can Use In Here!" << std::endl; }

	//이름 없는 namespace는 static 함수와 같은 효과를 갖는다
	//이 파일 내에서만 사용 가능하다
}

int main()
{
	std::cout << "hello, World" << std::endl;
	NsTest1::foo();
	OnlyThisFile();
		
	//레퍼런스 연습
	//JRef ref;
	//ref.Execute();

	//포인터 연습
	//JPointer Jptr;
	//Jptr.Execute();

	//4-1 객체
	//JDate date;
	//date.Execute();

	//4-2 오버라이드, 생성자
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
