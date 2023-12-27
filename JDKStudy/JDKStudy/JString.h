#pragma once
class JString
{
	char* str;
	int len;

public:
	JString(char c, int n);
	JString(const char* s);
	JString(const JString &s);
	~JString();

	void add_string(const JString &s);
	void copy_string(const JString &s);
	int strlen() { return len; }

	void PrintStr();
};

