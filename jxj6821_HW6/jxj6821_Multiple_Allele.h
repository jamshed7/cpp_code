#include "jxj6821_Allele.h"

class Multiple_Allele : public Allele
{
	public:
		Multiple_Allele() {};
		Multiple_Allele(char l, bool d, char l_two) : Allele(l, d), letter_two(l_two) {};
		char get_letter_two() const;
		std::string get_type() const;
		friend std::ostream& operator<<(std::ostream&, const Multiple_Allele&);
	private:
		char letter_two;
};
