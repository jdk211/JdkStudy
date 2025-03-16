#include "MyString.h"
#include <iostream>

MyString::MyString(char c)
{
	string_content = new char[1];
	string_content[0] = c;
	memory_capacity = string_length = 1;
}

MyString::MyString(const char* str)
{
	memory_capacity = string_length = strlen(str);
	string_content = new char[string_length];

	for (int i = 0; i < string_length; ++i)
	{
		string_content[i] = str[i];
	}
}

MyString::MyString(const MyString& str)
{
	memory_capacity = string_length = str.string_length;
	for (int i = 0; i < string_length; ++i)
	{
		string_content[i] = str.string_content[i];
	}
}

MyString::~MyString()
{
	delete[] string_content;
}

int MyString::strlen(const char* str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		++index;
	}

	return index;
}

void MyString::Print()
{
	for (int i = 0; i < string_length; ++i)
	{
		std::cout << string_content[i];
	}

	std::cout << std::endl;
}

MyString& MyString::assign(const MyString& str)
{
	if (str.string_length > memory_capacity)
	{
		delete[] string_content;

		string_content = new char[str.string_length];
		memory_capacity = str.string_length;
	}

	for (int i = 0; i < str.string_length; ++i)
	{
		string_content[i] = str.string_content[i];
	}

	string_length = str.string_length;

	return *this;
}

MyString& MyString::assign(const char* str)
{
	int str_length = strlen(str);
	if (str_length > memory_capacity)
	{
		delete[] string_content;

		string_content = new char[str_length];
		memory_capacity = str_length;
	}

	for (int i = 0; i < str_length; ++i)
	{
		string_content[i] = str[i];
	}

	string_length = str_length;

	return *this;
}

MyString& MyString::insert(int loc, const MyString& str)
{
	if(loc < 0 || loc > string_length)
		return *this;

	if (string_length + str.string_length > memory_capacity)
	{
		memory_capacity = string_length + str.string_length;

		char* prev_string_content = string_content;

	}
}

void MyString::reserve(int size)
{
	if (size > memory_capacity)
	{
		char *prev_string_content = string_content;

		string_content = new char[size];
		memory_capacity = size;

		for (int i = 0; i < string_length; ++i)
			string_content[i] = prev_string_content[i];
		
		delete[] prev_string_content;
	}
}

char MyString::at(int i) const
{
	if(i >= string_length || i < 0)
		return NULL;
	else
		return string_content[i];
}

void MyString::Execute()
{
}
