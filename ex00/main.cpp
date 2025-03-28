#include "ScalarConverter.hpp"

int main(int argc, char **argv)
 {


	if (argc != 2) 
	{
	    std::cerr << "Usage: ./convert <litteral>" << std::endl;
	    return 1;
	}
	std::string str = argv[1];

	Scalar::convert(str);
	return 0;
    }