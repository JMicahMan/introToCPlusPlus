#pragma once


template <typename T>
class Listit
{
	Listit();
	Listit(nodeType T);
	T operator*();
	Listit T operator++();
	const bool operator==(const Listit T&);
	const bool operator!=(const Listit T&);
};