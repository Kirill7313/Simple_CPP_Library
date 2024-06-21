#pragma once
#include <string>

using namespace std;

class lib {

private:
	string _ch;
	size_t _size;
	bool _isNegative;

public:
	lib(string);
	string getValue();
	void changeValue(string);
};