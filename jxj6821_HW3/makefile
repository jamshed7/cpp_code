CXXFLAGS = -std=c++11

all: executable

executable: jxj6821_main.o jxj6821_Allele.o jxj6821_Genotype.o jxj6821_Trait.o jxj6821_Pea_Plant.o jxj6821_Pea_Plant_Trait_Maps.o jxj6821_View.o jxj6821_Controller.o 
	$(CXX) $(CXXFLAGS) -o executable jxj6821_main.o jxj6821_Allele.o jxj6821_Genotype.o jxj6821_Trait.o jxj6821_Pea_Plant.o jxj6821_Pea_Plant_Trait_Maps.o jxj6821_View.o jxj6821_Controller.o

jxj6821_main.o: jxj6821_main.cpp
	$(CXX) $(CXXFLAGS) -c jxj6821_main.cpp

jxj6821_Allele.o: jxj6821_Allele.cpp jxj6821_Allele.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Allele.cpp

jxj6821_Genotype.o: jxj6821_Genotype.cpp jxj6821_Genotype.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Genotype.cpp

jxj6821_Trait.o: jxj6821_Trait.cpp jxj6821_Trait.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Trait.cpp

jxj6821_Pea_Plant.o: jxj6821_Pea_Plant.cpp jxj6821_Pea_Plant.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Pea_Plant.cpp

jxj6821_Pea_Plant_Trait_Maps.o: jxj6821_Pea_Plant_Trait_Maps.cpp jxj6821_Pea_Plant_Trait_Maps.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Pea_Plant_Trait_Maps.cpp

jxj6821_View.o: jxj6821_View.cpp jxj6821_View.h
	$(CXX) $(CXXFLAGS) -c jxj6821_View.cpp

jxj6821_Controller.o: jxj6821_Controller.cpp jxj6821_Controller.h
	$(CXX) $(CXXFLAGS) -c jxj6821_Controller.cpp


clean:
	rm -f *.o executable
