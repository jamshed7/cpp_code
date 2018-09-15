CXXFLAGS = -std=c++11

all: executable

executable: jxj6821_main.o jxj6821_Allele.o jxj6821_Genotype.o jxj6821_Trait.o
	$(CXX) $(CXXFLAGS) -o executable jxj6821_main.o jxj6821_Allele.o jxj6821_Genotype.o jxj6821_Trait.o
jxj6821_main.o: jxj6821_main.cpp
	$(CXX) $(CXXFLAGS) -c jxj6821_main.cpp
jxj6821_Allele.o: jxj6821_Allele.cpp jxj6821_Allele.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Allele.cpp
jxj6821_Genotype.o: jxj6821_Genotype.cpp jxj6821_Genotype.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Genotype.cpp
jxj6821_Trait.o: jxj6821_Trait.cpp jxj6821_Trait.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Trait.cpp
clean:
	rm -f *.o executable
