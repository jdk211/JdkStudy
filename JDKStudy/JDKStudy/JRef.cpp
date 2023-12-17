#include "JRef.h"
#include "stdio.h"
#include <iostream>

void JRef::Execute()
{
{
	int a = 5;
	printf("area a : %d \n", a);

	change_val(&a);
	printf("ref change val a : %d \n", a);

	int& b = a;
	printf("ref change b : %d \n", b);
	//참조자는 한번 정해지면 다른것을 참조 할 수 없다
	//int c; b = c X

	b = 5;
	printf("ref change val a : %d, b : %d \n", a, b);

	change_val(b);
	printf("ref change val a : %d, b : %d \n", a, b);

	std::cin >> b;
	printf("ref change val a : %d, b : %d \n", a, b);
	//cin은 기본적으로 &로 받는다

	scanf_s("%d", &b);
	printf("ref change val a : %d, b : %d \n", a, b);
}

	//int &ref = 4; X
	//const int &ref = 4; O
	//int &ref = a; O

	//int* b = &a;
	//*b = 1;
	//JRef* pA = new JRef();
	//JRef A = *pA;
	//JRef* pB = pA;

{
	//레퍼런스의 배열, 배열의 레퍼런스
	//int c, d;
	//int &arr[2] = {c, d};
	//레퍼런스 배열은 불가능, 배열은 이미 메모리를 할당 받았기 떄문

	//하지만 배열의 레퍼런스는 가능하다
	int arr[3] = {1, 2, 3};
	int (&refArr)[3] = arr;

	for (int i = 0; i < 3; ++i)
	{
		printf("Arr : %d \n", arr[i]);
	}

	refArr[0] = 4;
	refArr[1] = 5;
	refArr[2] = 6;

	for (int i = 0; i < 3; ++i)
	{
		printf("change ref Arr : %d \n", arr[i]);
	}
}
{
	//레퍼런스 리턴함수부터1
	
	//값의 복사
	int a = copy_func();
	printf("copy func val : %d \n", a);
	
	//레퍼런스 리턴
	int b = ref_return();
	//b = 5;
	printf("ref return func val : %d \n", b);
	//warning 함수에서 반환하는 변수의 레퍼런스는 사라짐
	//이를 Dangling Reference라 한다

	//인자로 받은 레퍼런스 반환
	int c = ref_return_param(b);
	printf("ref return param val : %d \n", c);

	//리턴함수를 참조자로 받기
	//int &d = copy_func(); 상수가 아니면 참조자로 못 받음
	const int &d = copy_func();
	printf("&d return param val : %d \n", d);


}
}
