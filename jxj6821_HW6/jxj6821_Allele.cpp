#include "jxj6821_Allele.h"

char Allele::get_letter() const
{
	return letter;
}

bool Allele::get_dominance() const
{
	return dominance;
}

std::string Allele::get_type() const
{
	return "Allele";
}

std::ostream& operator<<(std::ostream& ost, const Allele& rhs)
{
	ost << "Letter: " << rhs.get_letter() << "\nDominance: " << rhs.get_dominance() << std::endl;
	return ost;
}
