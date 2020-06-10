#ifndef NEWSPAPER_H_INCLUDED
#define NEWSPAPER_H_INCLUDED

#pragma once
#include <iostream>
#include <string>
#include "Edition.h"

using namespace std;


class Newspaper:public Edition
{
	string Format;
	bool Chromaticity;
public:



	Newspaper();
	Newspaper(string Form, bool Color);
	Newspaper(const Newspaper& other);



	string Get_Newspaper_Format()const;
	bool Get_Newspaper_Chromaticity()const;
	void Set_Newspaper_Format(string Form);
	void Set_Newspaper_Chromaticity(bool Color);


	void Print()override;



	Newspaper& operator =(const Newspaper& other);
};

#endif // NEWSPAPER_H_INCLUDED
