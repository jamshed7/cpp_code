#ifndef ALLELE_H
#define ALLELE_H

#include <string>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Allele
{
	public:
		Allele() {};
		Allele(char l, bool d) : letter(l), dominance(d) {};
		char get_letter() const;
		bool get_dominance() const;
	private:
		char letter;
		bool dominance;
};

#endif // ALLELE_H
