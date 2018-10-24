#pragma once
#include <iostream>
#include <functional>


namespace HashFunction
{

	typedef std::function< unsigned int(const char*, unsigned int)> HashFunc;

	unsigned int badHash(const char* data, unsigned int length);

	static HashFunc;

}