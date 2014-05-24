pracownik.out: pracownik.o pracownikmain.o
	g++ pracownik.o pracownikmain.o -o pracownik.out

pracownikmain.o: pracownikmain.cpp
	g++ -c pracownikmain.cpp

pracownik.o: pracownik.cpp
	g++ -c pracownik.cpp

clean:
	rm pracownik.o pracownikmain.o
