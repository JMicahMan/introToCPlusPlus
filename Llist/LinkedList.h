#pragma once
#include <iostream>
#include <cstdlib>
#include "LinkedListIterator.h"

template <typename T>
struct node
{
	T data;
	node<T> *link;

};

template <typename T>
class LinkedList
{
public:
	const operator LinkedList (const LinkedList < T >&)
	{

	}
	void initializeList()
	{

	}
	const bool isEmptyList()
	{

	}
	const int length()
	{

	}
	void destroyList()
	{

	}
	const T front()
	{

	}
	const T back()
	{

	}
	const bool search(const T&) = 0
	{

	}
	void insertFirst(const T&) = 0;
	{

	}
	void insertLast(const T&) = 0
	{

	}
	void deleteNode(const T&) = 0
	{

	}
	LinkedListIterator T begin()
	{

	}
	LinkedListIterator T end()
	{

	}
	LinkedList()
	{

	}
	LinkedList(const LinkedList T&)
	{

	}
	LinkedList()
	{

	}
	
private:
	void copyList(const LinkedList T&)
	{

	}
	
};