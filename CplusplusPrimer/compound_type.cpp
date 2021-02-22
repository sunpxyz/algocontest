// ch02_variables_and_basic_types
// compound_type.cpp
// 2019/3/14


#include <iostream>

int ival = 1024;
int &refVal = ival;
int &refVal2 = refVal;

int main()
{
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	r2 = r1;
	i = r2;
	r1 = d;


	return 0;
}