#include "jxj6821_Genotype.h"

Genotype::Genotype(Allele* a_one, Allele* a_two)
{
	if(a_one->get_dominance()) //if input is RR or Rr
	{
		allele_one = a_one;
		allele_two = a_two;
	}
	else
	{
		allele_one = a_two; //if input is rR or rr
		allele_two = a_one;
	}
}

Allele* Genotype::get_allele_one() const
{
	return allele_one;
}

Allele* Genotype::get_allele_two() const
{
	return allele_two;
}

std::ostream& operator<<(std::ostream& ost, const Genotype& rhs)
{
	Allele *a1 = rhs.get_allele_one();
	Allele *a2 = rhs.get_allele_two();


	if (a1->get_type() == "Multiple Allele")
	{
		Multiple_Allele *a = dynamic_cast<Multiple_Allele*>(a1);
		ost<<*a;
	}
	else{
		ost<<*a1;
	}
	if (a2->get_type() == "Multiple Allele")
	{
		Multiple_Allele *a = dynamic_cast<Multiple_Allele*>(a2);
		ost<<*a;
	}
	else{
		ost<<*a2;
	}

	ost << std::endl;


	return ost;


	/*if(rhs.get_allele_one()->get_type() == "Allele")
	{
		ost<<*(get_allele_one());
	}
	else
	{
		ost<<*(dynamic_cast<Multiple_Allele*>(rhs.get_allele_one()));
	}

	if(rhs.get_allele_two()->get_type() == "Allele")
	{
		ost<<*(get_allele_two());
	}
	else
	{
		ost<<*(dynamic_cast<Multiple_Allele*>(rhs.get_allele_two()));
	}

	return ost;*/
}
