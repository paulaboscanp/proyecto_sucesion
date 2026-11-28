all:
	g++ -std=c++11 src/main.cpp src/arbol.cpp -o bin/programa

run:
	./bin/programa