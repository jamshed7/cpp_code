CXXFLAGS = -std=c++11

all: executable

executable: jxj6821_main.o jxj6821_Allele.o jxj6821_Multiple_Allele.o jxj6821_Genotype.o
	$(CXX) $(CXXFLAGS) -o executable jxj6821_main.o jxj6821_Allele.o jxj6821_Multiple_Allele.o jxj6821_Genotype.o

jxj6821_main.o: jxj6821_main.cpp jxj6821_Allele.h jxj6821_Multiple_Allele.h jxj6821_Genotype.o
	$(CXX) $(CXXFLAGS) -c jxj6821_main.cpp

jxj6821_Multiple_Allele.o: jxj6821_Multiple_Allele.cpp jxj6821_Multiple_Allele.h jxj6821_Allele.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Multiple_Allele.cpp

jxj6821_Allele.o: jxj6821_Allele.cpp jxj6821_Allele.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Allele.cpp

jxj6821_Genotype.o: jxj6821_Genotype.cpp jxj6821_Genotype.h jxj6821_Multiple_Allele.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Genotype.cpp

clean:
	rm -f *.o executable
