CXXFLAGS:: -std=c++11

all: executable

executable: jxj6821_main.o jxj6821_Multiple_Alleles.o jxj6821_Allele.o
	$(CXX) $(CXXFLAGS) -o executable jxj6821_main.o jxj6821_Multiple_Alleles.o jxj6821_Allele.o

jxj6821_main.o: jxj6821_main.cpp jxj6821_Multiple_Alleles.h jxj6821_Allele.h
	$(CXX) $(CXXFLAGS) -c jxj6821_main.cpp

jxj6821_Multiple_Alleles.o: jxj6821_Multiple_Alleles.cpp jxj6821_Multiple_Alleles.h jxj6821_Allele.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Multiple_Alleles.cpp

jxj6821_Allele.o: jxj6821_Allele.cpp jxj6821_Allele.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Allele.cpp

clean:
	rm -f *.o executable
