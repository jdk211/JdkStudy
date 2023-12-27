#include "JString.h"
#include <iostream>

JString::JString(char c, int n)
{
	len = n;
	str = new char[len + 1];
	memset(str, c, len);
	str[len] = '\0';
}

JString::JString(const char* s)
{
	len = 0;
	while (s[len])
	{
		++len;
	}

	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
}

JString::JString(const JString& s)
{
	len = s.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
}

JString::~JString()
{
	if(str)
		delete[] str;
}

void JString::add_string(const JString& s)
{
	char* tmpStr = new char[len + s.len + 1];
	strcpy_s(tmpStr, len + 1, str);
	strcat_s(tmpStr, len + s.len + 1, s.str);
	len += s.len;
	
	delete[] str;
	
	str = tmpStr;
}

void JString::copy_string(const JString& s)
{
	len = s.len;
	delete[] str;
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
}

void JString::PrintStr()
{
	std::cout << "JString : " << str << std::endl;
}

