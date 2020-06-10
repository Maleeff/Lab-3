#include "Newspaper.h"
#include <iostream>
#include <string>

using namespace std;



Newspaper::Newspaper()
{
	Format = { "A4" };
	Chromaticity = 1;

}
Newspaper::Newspaper(string Form, bool Color)
{
	Set_Newspaper_Format(Form);
	Set_Newspaper_Chromaticity(Color);
}
Newspaper::Newspaper(const Newspaper& other)
{
	this->Format = other.Format;
	this->Chromaticity = other.Chromaticity;
}



string Newspaper::Get_Newspaper_Format()const
{
	return Format;
}
bool Newspaper::Get_Newspaper_Chromaticity()const
{
	return Chromaticity;
}
void Newspaper::Set_Newspaper_Format(string Form)
{
	Format = Form;
}
void Newspaper::Set_Newspaper_Chromaticity(bool Color)
{
	Chromaticity = Color;
}



void Newspaper::Print()
{
	Edition::Print();
	cout << " have " << Format << "Format and have " << Chromaticity << " Chromaticity" << endl;
}



Newspaper& Newspaper::operator =(const Newspaper& other)
{
	this->Format = other.Format;
	this->Chromaticity = other.Chromaticity;
	return *this;
}
