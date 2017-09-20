# Test para examen de 3 de septiembre de 2012

CPPFLAGS = -g -Wall -ansi

all: test1 test2 test3 
	
test1: test1.cpp empresa.cpp empresa.hpp
	g++  $(CPPFLAGS) test1.cpp empresa.cpp -o test1.exe
	@echo  ////////////////////////////////////////////////////
	@echo
	@echo " * Programa compilado. "
	@echo "Iniciando ejecución del programa que comprueba la clase Empresa... "
	@echo
	./test1.exe
	@echo  ////////////////////////////////////////////////////
	@echo

	
test2: test2.cpp pyme.cpp pyme.hpp empresa.cpp empresa.hpp
	g++  $(CPPFLAGS) test2.cpp pyme.cpp empresa.cpp -o test2.exe
	@echo  ////////////////////////////////////////////////////
	@echo
	@echo " * Programa compilado. "
	@echo "Iniciando ejecución del programa que comprueba la clase Pyme... "
	@echo
	./test2.exe
	@echo  ////////////////////////////////////////////////////


test3: test3.cpp apyme.cpp apyme.hpp pyme.cpp pyme.hpp empresa.cpp empresa.hpp
	g++  $(CPPFLAGS) test3.cpp apyme.cpp pyme.cpp empresa.cpp -o test3.exe
	@echo  ////////////////////////////////////////////////////
	@echo
	@echo " * Programa compilado. "
	@echo "Iniciando ejecución del programa que comprueba la clase Apyme... "
	@echo
	./test3.exe
	@echo  ////////////////////////////////////////////////////


clean:
	rm -f *.o  *.exe	
