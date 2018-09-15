#include "jxj6821_Genotype.h"

int main()
{
	Allele a1('T', true);
	Allele a2('t', false);
	Genotype g1(&a1, &a2);

	std::cout << "OUTPUT:\n"<<g1;



	Allele a3('X', true);
	Multiple_Allele a4('x', false, 'x');
	Genotype g2(&a3, &a4);

	std::cout << g2;

	return 0;
}
