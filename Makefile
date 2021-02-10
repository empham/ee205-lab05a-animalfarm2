###############################################################################
# University of Hawaii, College of Engineering
# EE 205  - Object Oriented Programming
# Lab 05a - Animal Farm 2
#
# @file    Makefile
# @version 1.0
#
# @author @todo yourName <@todo yourMail@hawaii.edu>
# @brief  Lab 05a - Animal Farm 2 - EE 205 - Spr 2021
# @date   @todo dd_mmm_yyyy
###############################################################################

all: main

main.o:  animal.hpp main.cpp
	g++ -c main.cpp

animal.o: animal.hpp animal.cpp
	g++ -c animal.cpp
	
mammal.o: mammal.hpp mammal.cpp
	g++ -c mammal.cpp

cat.o: cat.cpp cat.hpp
	g++ -c cat.cpp

main: main.cpp *.hpp main.o animal.o mammal.o cat.o 
	g++ -o main main.o animal.o mammal.o cat.o 
	
clean:
	rm -f *.o main