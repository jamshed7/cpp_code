#include "jxj6821_Allele.h"
#ifndef jxj6821_Genotype_H
#define jxj6821_Genotype_H


class Genotype
{
	public:
		Genotype() {};
		Genotype(Allele a_one, Allele a_two);
		Allele get_allele_one() const;
		Allele get_allele_two() const;
		bool operator<(const Genotype& rhs) const;
	private:
		Allele allele_one;
		Allele allele_two;
};

#endif // jxj6821_Genotype_H
