#pragma once
#include "IExecute.h"

class DefaultConstruct {

	/*C++ 11 �������� ����Ʈ �����ڸ� ����ϰ� ���� ��� �׳� �����ڸ� �������� �ʴ� ��� �ۿ� �������ϴ�.
		������ �� ������ �� �ڵ带 �д� ����� ���忡�� �����ڰ� ���� �ذ� �����ڸ� ���Ǹ� ���� ������,
		�ƴϸ� ���� ����Ʈ �����ڸ� ����ϰ��ļ� �̷� ������ �˱��� ������.

		�����̵� C++ 11 ���� ��������� ����Ʈ �����ڸ� ����ϵ��� ����� �� �ֽ��ϴ�.*/

	public:
	DefaultConstruct() = default; // ����Ʈ �����ڸ� �����ض�


};

class JDate : public IExecute
{
	int Year;
	int Month;
	int Day;

public:
	JDate() {Year = 0; Month = 0, Day = 0;};
	JDate(int _Year, int _Month, int _Day) { Year = _Year; Month = _Month; Day = _Day; }

	void SetDate(int _Year, int _Month, int _Day);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);

	void ShowData();

	void Execute() override;

private:
	void UpdateDay();
	void UpdateMonth();
	void UpdateYear();

	int EndDay();

	bool IsLeapMonth() { return Year % 4 == 0 && (Year % 100 != 0 || Year % 400 == 0); };
};	

