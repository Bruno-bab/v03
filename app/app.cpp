#include "app.h"

namespace vsite::oop::v3
{

	results::results(int len)
	{
		br = len;
		popis = new student[br];
	}

	void results::add(student const &s)
	{
		popis[count] = s;
		++count;
	}

	unsigned results::has_grade(int ocjena)
	{
		int br_ocjena = 0;
		for (int i = 0; i < br; i++)
		{
			if (popis[i].grade == ocjena)
			{
				br_ocjena++;
			}
		}
		return br_ocjena;
	}

	unsigned results::starts_with_letter(char slovo)
	{
		int br_slova = 0;
		for (int i = 0; i < br; i++) {
			if (tolower(popis[i].name[0]) == tolower(slovo))
			{
				br_slova++;
			}
		}
		return br_slova;
	}

	results::~results()
	{
		delete[] popis;
	}


	array::array(unsigned l, double v)
	{
		polje = new double[l];
		len = l;
		for (unsigned i = 0; i < l; ++i)
		{
			polje[i] = v;
		}
	}

	unsigned array::size()
	{
		return len;
	}

	double array::at(int i)
	{
		if (i < len && i >= 0)
		{
			return polje[i];
		}
		return 0;
	}

	void array::push_back(double n)
	{
		int len2 = len + 1;
		double* polje2 = new double[len2];
		for (unsigned i = 0; i < len; i++)
		{
			polje2[i] = polje[i];
		}
		delete[] polje;
		polje = polje2;
		polje2[len2 - 1] = n;
		len = len2;
	}

	array::array(array&& other)
	{
		len = other.len;
		polje = other.polje;
		other.len = 0;
		other.polje = nullptr;
	}

	array::array(const array& other)
	{
		len = other.len;
		polje = new double[len];
		for (unsigned i = 0; i < len; i++)
		{
			polje[i] = other.polje[i];
		}
	}

	array::~array()
	{
		delete[] polje;
	} 
}