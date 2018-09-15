
#ifndef jxj6821_Allele_H
#define jxj6821_Allele_H

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

#endif // jxj6821_Allele_H
