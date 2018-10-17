#pragma once

template <typename T>
struct node
{
	T data;
	node<T> *link;

};
template <typename T>
class LinkedListIterator
{
private:
	node<T> *current;

public:
	LinkedListIterator()
	{
		current = nullptr;
	}
	*LinkedListIterator(node<T> ptr)
	{
		current = ptr;
	}
	T operator*()
	{
		return current->data;
	}
	LinkedListIterator<T> operator++()
	{
		current = current->link;
		return *this;

	}
	const bool operator==(const LinkedListIterator<T>&)
	{
		if (current == operator)
			return true;
		
		else
			return false;
	}
	const bool operator!=(const LinkedListIterator<T>&)
	{
		if (current == operator)
			return true;

		else
			return false;
	}
};