#include "ProjectLib.h"
#include <string>

lib::lib(string begin) {
	_ch = begin;
	_size = begin.size();
	if (std::stoi(begin) < 0) {
		this->_isNegative = true;
	}
	else {
		this->_isNegative = false;
	}
}

std::string lib::getValue() {
	std::string _value = this->_ch;
	if (this->_isNegative)
		_value.insert(0, "-");
	return _value;
}

void lib::changeValue(std::string newValue) {
	this->_size = newValue.size();
	this->_ch = newValue;
	if (std::stoi(newValue) < 0) {
		this->_isNegative = true;
	} else {
		this->_isNegative = false;
	}
}