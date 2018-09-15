#include "jxj6821_Multiple_Allele.h"

char Multiple_Allele::get_letter_two() const
{
	return letter_two;
}

std::string Multiple_Allele::get_type() const
{
	return "Multiple Allele";
}

std::ostream& operator<<(std::ostream& ost, const Multiple_Allele& rhs)
{
	ost << "Letter 1: " << rhs.get_letter() << "\nLetter 2: "<< rhs.get_letter_two() << "\nDominance: " << rhs.get_dominance() << std::endl;

	return ost;
}
