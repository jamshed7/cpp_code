#ifndef ALLELE_H
#define ALLELE_H

#include <iostream>
#include <string>

class Allele
{
	public:
		Allele() {};
		Allele(char l, bool d) : letter(l), dominance(d) {};
		char get_letter() const;
		bool get_dominance() const;
		virtual std::string get_type() const;
		friend std::ostream& operator<<(std::ostream&, const Allele&);
	protected:
		char letter;
		bool dominance;
};
#endif
