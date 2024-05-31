all: build

build:
	g++ -c p1.cpp
	g++ -c p3.cpp
	g++ -c p6.cpp
	g++ -c main.cpp
	g++ p1.o p3.o p6.o main.o -o main
	@echo "Ejecutando..."
	.\main.exe

clean_exe:
	rm *.exe

clean:
	rm *.o