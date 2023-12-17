#pragma once
#include "IExecute.h"

class DefaultConstruct {

	/*C++ 11 이전에는 디폴트 생성자를 사용하고 싶을 경우 그냥 생성자를 정의하지 않는 방법 밖에 없었습니다.
		하지만 이 때문에 그 코드를 읽는 사용자 입장에서 개발자가 깜빡 잊고 생성자를 정의를 안한 것인지,
		아니면 정말 디폴트 생성자를 사용하고파서 이런 것인지 알길이 없겠죠.

		다행이도 C++ 11 부터 명시적으로 디폴트 생성자를 사용하도록 명시할 수 있습니다.*/

	public:
	DefaultConstruct() = default; // 디폴트 생성자를 정의해라


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

