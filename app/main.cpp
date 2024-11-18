#include "app.h"
#include <iostream>
// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics

int main()
{
	int br;
	int ocjena;
	char slovo;

	std::cout << "Broj studenata: ";
	std::cin >> br;
	vsite::oop::v3::results grupa_studenta(br);
	vsite::oop::v3::student student;

	for (int i = 1; i <= br; i++)
	{
		std::cout << i << "." << " student: ";
		std::cin >> student.name >> student.grade;
		grupa_studenta.add(student);
	}

	std::cout << "Ocjena: ";
	std::cin >> ocjena;
	std::cout << "Prvo slovo: ";
	std::cin >> slovo;

	int br_ocjena = grupa_studenta.has_grade(ocjena);
	int br_slova = grupa_studenta.starts_with_letter(slovo);
	std::cout << br_ocjena << " ocjene " << ocjena << std::endl;
	std::cout << br_slova << " slova " << slovo << std::endl;
}
