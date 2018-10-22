#include"Sorter.h"
Sorter::Sorter()
{
	m_Count = -1;
	Capacity = 6;
	m_Data = new Player[Capacity];
}
//returns top of Sorter
Player* Sorter::Top()
{
	if (IsEmpty())
	{
		return nullptr;
	}

	return &m_Data[m_Count];
}
//takes item from top of the Sorter
bool Sorter::Pop()
{
	if (IsEmpty())
	{
		return false;
	}

	m_Data[(m_Count--)] = Player();
	return true;
}

//puts item on top of the Sorter
bool Sorter::Push(Player* item)
{
	if (IsFull())
	{
		return false;
	}

	m_Count++;
	m_Data[m_Count] = *item;
	return true;
}
//if Sorter is empty
bool Sorter::IsEmpty()
{
	if (m_Count == -1)
	{
		return true;
	}
	return false;
}
//if Sorter is full
bool Sorter::IsFull()
{
	if ((m_Count + 1) == Capacity)
	{
		return true;
	}
	return false;
}

void Sorter::sortByHealth()
{
	Player temp;
	for (int i = 0; i < Capacity; i++)
	{
		for (int j = 0 + 1; j < Capacity; j++)
		{
			if (m_Data[i] < m_Data[j])
			{
				temp = m_Data[i];
				m_Data[i] = m_Data[j];
				m_Data[j] = temp;
			}
		}
	}
}