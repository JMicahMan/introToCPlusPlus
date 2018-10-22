#pragma once
#include "Player.h"
class Sorter
{
public:
	Sorter();
	Player* Top();
	Player* Bottom();
	bool Pop();
	bool Push(Player* item);
	bool IsEmpty();
	bool IsFull();
	void sortByHealth();

private:
	//holds some kind of data
	Player * m_Data;
	//counts something
	int m_Count;
	int Capacity;
};