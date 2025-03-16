#pragma once

#include "IExecute.h"

class MyString : public IExecute
{

public:
	MyString(char c);
	MyString(const char* str);
	MyString(const MyString& str);
	~MyString();

	int strlen(const char* str);
	int capacity() const { return memory_capacity; }
	int Length() const { return string_length; }
	void Print();

	MyString& assign(const MyString& str);
	MyString& assign(const char* str);
	MyString& insert(int loc, const MyString& str);
	
	void reserve(int size);
	char at(int i) const;
	
	void Execute() override;
private:
	char* string_content;
	int string_length = 0;
	int memory_capacity = 0;
};

