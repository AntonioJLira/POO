# Test para examen de 23 de enero de 2012

CPPFLAGS = -g -Wall -ansi

all: test1 test2 test3 
	
test1: test1.cpp persona.cpp persona.hpp
	g++  $(CPPFLAGS) test1.cpp persona.cpp -o test1.exe
	@echo  ////////////////////////////////////////////////////
	@echo
	@echo " * Programa compilado. "
	@echo "Iniciando ejecución del programa que comprueba la clase Persona... "
	@echo
	./test1.exe
	@echo  ////////////////////////////////////////////////////
	@echo

	
test2: test2.cpp socio.cpp socio.hpp persona.cpp persona.hpp
	g++  $(CPPFLAGS) test2.cpp socio.cpp persona.cpp -o test2.exe
	@echo  ////////////////////////////////////////////////////
	@echo
	@echo " * Programa compilado. "
	@echo "Iniciando ejecución del programa que comprueba la clase Socio... "
	@echo
	./test2.exe
	@echo  ////////////////////////////////////////////////////


test3: test3.cpp ong.cpp ong.hpp socio.cpp socio.hpp persona.cpp persona.hpp
	g++  $(CPPFLAGS) test3.cpp ong.cpp socio.cpp persona.cpp -o test3.exe
	@echo  ////////////////////////////////////////////////////
	@echo
	@echo " * Programa compilado. "
	@echo "Iniciando ejecución del programa que comprueba la clase Ong... "
	@echo
	./test3.exe
	@echo  ////////////////////////////////////////////////////


clean:
	rm -f *.o  *.exe	
