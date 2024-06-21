#include "ProjectLib.h"
#include <iostream>

using namespace std;

int main() {
	lib test_var("100");
	cout << "The first value: " << test_var.getValue() << endl;
	test_var.changeValue("1000");
	cout << "The second value: " << test_var.getValue() << endl;
	return 0;
}