all: build

build:
	g++ -c contactos.cpp
	g++ -c main.cpp
	g++ contactos.o main.o -o main
	./main.exe

clean:
	rm -rf *.o
	rm -rf *.exe