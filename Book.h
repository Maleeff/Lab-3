#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#pragma once
#include <iostream>
#include <string>
#include "Edition.h"

using namespace std;

class Book:public Edition
{
	int CountPage;
	string Author;
public:



	Book();
	Book(int Pages, string Name);
	Book(const Book& other);



	int Get_CountPage () const;
	string Get_Author() const;
	bool Set_CountPage(int Pages);
	void Set_Author(string Name);



	void Print()override ;



	Book& operator =(const Book& other);

};

#endif // BOOK_H_INCLUDED
