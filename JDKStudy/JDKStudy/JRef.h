#pragma once
#include "IExecute.h"

class JRef : public IExecute
{
	//JRef() {}
	//~JRef() {}

public:
	void Execute() override;

private:
	void change_val(int* p) { *p = 9999; }
	void change_val(int& p) { p = 8888; }

	int copy_func() 
	{ 
		int a = 2; 
		return a;
	}

	int& ref_return()
	{
		int a = 3;
		return a;
	}

	int& ref_return_param(int& a)
	{
		a = 7;
		return a;
	}
};


