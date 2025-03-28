#ifndef SCALAR
#define SCALAR
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cmath>

class Scalar
{
	private:
	Scalar();

	public:
	static void convert(std::string &literal);

};

#endif