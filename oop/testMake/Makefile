# Makefile

main: main.o AdvPolymorphism.o
	g++ main.o AdvPolymorphism.o -o main

main.o: main.cpp
	g++ -c main.cpp

AdvPolymorphism.o: AdvPolymorphism.cpp AdvPolymorphism.h
	g++ -c AdvPolymorphism.cpp

clean:
	rm *.o main