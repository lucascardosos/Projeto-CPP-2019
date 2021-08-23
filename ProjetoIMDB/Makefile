todos: objetos
	g++ -pedantic -std=c++11 *.o -o main.exe
	./main.exe
	rm *.o

objetos: ./src/sources/*.cpp
	g++ -pedantic -std=c++11 -c ./src/sources/*.cpp
