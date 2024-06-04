all: build

build:
	g++ -c p1.cpp
	g++ -c p3.cpp
	g++ -c p6.cpp
	g++ -c p10.cpp
	g++ -c p13.cpp
	g++ -c main.cpp
	g++ p1.o p3.o p6.o p10.o p13.o main.o -o main
	@echo "Ejecutando..."
	./main.exe < datap13.txt

clean_exe:
	rm *.exe

clean:
	rm *.o