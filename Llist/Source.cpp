#include <iostream>
#include <cstdlib>
#include <list>
#include "LinkedList.h"
#include "Listit.h"

int main()
{
	std::list<int> LinkedList(2, 100);
	LinkedList.push_front(200);
	LinkedList.push_front(300);
	LinkedList.push_back(100);
	LinkedList.push_back(200);

	std::list<int>::iterator it;
	it = LinkedList.insert(it, 500);

	for (std::list<int>::iterator it = LinkedList.begin(); it != LinkedList.end(); ++it);

	std::count(LinkedList.front, LinkedList.back, 20);

	for (; it,  LinkedList.back(); it++)
	{
		it = LinkedList.erase(it);
		remove(0);


	}

	LinkedList.pop_back();
	LinkedList.pop_front();
	LinkedList.empty();
	LinkedList.clear();


	system("pause");
	return 0;
}