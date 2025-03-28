#include "ScalarConverter.hpp"

Scalar::Scalar()
{

}

Scalar::~Scalar()
{

}

int char_convert(std::string &literal)
{
	if (literal.length() == 1 && !std::isdigit(literal[0])) 
	{
		char c = literal[0];
		std::cout << "char: '" << c << "'" << std::endl;
	} 
	else if (literal.length() == 1 && std::isdigit(literal[0])) 
	{
		    std::cout << "char: Non displayable" << std::endl;
	} 
	else 
	{
		    std::cout << "char: impossible" << std::endl;
	}
}

int int_convert(std::string &literal)
{
	try {
		int i = std::stoi(literal);
		std::cout << "int: " << i << std::endl;
	    } 
	catch (...) 
	{
		std::cout << "int: impossible" << std::endl;
	}
}

int float_convert(std::string &literal)
{
	try 
	{
		float f = std::stof(literal);
		if (literal.find("f") != std::string::npos)
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		else
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << std::endl;
	} 
	catch (...) 
	{
		std::cout << "float: impossible" << std::endl;
	}
}

int double_convert(std::string &literal)
{
	try 
	{
		double d = std::stod(literal);
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	} 
	catch (...) 
	{
		std::cout << "double: impossible" << std::endl;
	}
}

static void convert(std::string &literal)
{
	char_convert(literal);
	int_convert(literal);
	float_convert(literal);
	double_convert(literal);
}