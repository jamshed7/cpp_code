#ifndef GENOTYPE_H
#define GENOTYPE_H
#include "jxj6821_Multiple_Allele.h"

class Genotype
{
	public:
		Genotype() {};
		Genotype(Allele *a_one, Allele *a_two);
		Allele* get_allele_one() const;
		Allele* get_allele_two() const;

		friend std::ostream& operator<<(std::ostream&, const Genotype&);
	private:
		Allele* allele_one;
		Allele* allele_two;
};
#endif
