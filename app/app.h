#pragma once
#include <string>

namespace vsite::oop::v3 
{
	struct student
	{
		std::string name;
		int grade;
	};
	
	class results
	{
	private:
		int count = 0;
		int br = 0;
		student* popis = nullptr;

	public:
		results(int br = 0);
		void add(student const &s);
		unsigned has_grade(int ocjena);
		unsigned starts_with_letter(char slovo);
		~results();
	};

	class array
	{
	private:
		unsigned len;
		double val;
		double* polje = nullptr;

	public:
		array(unsigned l = 0, double v = 0.0);
		unsigned size();
		double at(int i = 0);
		void push_back(double n);
		array(array&& other);
		array(const array& other);
		~array();
	};
}