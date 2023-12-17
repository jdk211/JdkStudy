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
	//�����ڴ� �ѹ� �������� �ٸ����� ���� �� �� ����
	//int c; b = c X

	b = 5;
	printf("ref change val a : %d, b : %d \n", a, b);

	change_val(b);
	printf("ref change val a : %d, b : %d \n", a, b);

	std::cin >> b;
	printf("ref change val a : %d, b : %d \n", a, b);
	//cin�� �⺻������ &�� �޴´�

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
	//���۷����� �迭, �迭�� ���۷���
	//int c, d;
	//int &arr[2] = {c, d};
	//���۷��� �迭�� �Ұ���, �迭�� �̹� �޸𸮸� �Ҵ� �޾ұ� ����

	//������ �迭�� ���۷����� �����ϴ�
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
	//���۷��� �����Լ�����1
	
	//���� ����
	int a = copy_func();
	printf("copy func val : %d \n", a);
	
	//���۷��� ����
	int b = ref_return();
	//b = 5;
	printf("ref return func val : %d \n", b);
	//warning �Լ����� ��ȯ�ϴ� ������ ���۷����� �����
	//�̸� Dangling Reference�� �Ѵ�

	//���ڷ� ���� ���۷��� ��ȯ
	int c = ref_return_param(b);
	printf("ref return param val : %d \n", c);

	//�����Լ��� �����ڷ� �ޱ�
	//int &d = copy_func(); ����� �ƴϸ� �����ڷ� �� ����
	const int &d = copy_func();
	printf("&d return param val : %d \n", d);


}
}
