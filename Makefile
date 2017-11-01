build: 
	g++ -c -o 01.o 01.cpp; g++ -o 01 01.o
	g++ -c -o 02.o 02.cpp; g++ -o 02 02.o
	g++ -c -o 03.o 03.cpp; g++ -o 03 03.o
	g++ -c -o 04.o 04.cpp; g++ -o 04 04.o
.PHONY: