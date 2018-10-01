#include <iostream>
#include <fstream>


void main()
{
	std::ifstream fin("library.dat", std::ios::in | std::ios::binary);
	if (fin.good())
	{
		//fin.read((char*))
	}
}