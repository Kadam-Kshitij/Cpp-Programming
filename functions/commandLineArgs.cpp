#include <iostream>

// int main( int argc, char* argv[] )
int main( int argc, char** argv )
{
	std::cout << "Number of args = " << argc << std::endl;

	for( int i = 0; i < argc; ++i )
	{
		std::cout << argv[i] << ", ";
	}
	std::cout << std::endl;
}