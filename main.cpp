///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 05a - Animal Farm 2
///
/// @file main.cpp
/// @version 1.0
///
/// Exports data about all animals
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @brief  Lab 05a - AnimalFarm2 - EE 205 - Spr 2021
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "animal.hpp"
#include "cat.hpp"

using namespace std;
using namespace animalfarm;

int main() {
	cout << "Welcome to Animal Farm 2" << endl;
	
	Cat myCat( "Bella", BLACK, FEMALE );
	myCat.printInfo();
	
//	Dog myDog( "Arloe", WHITE, MALE );
//	myDog.printInfo();
	
//	Nunu myNunu( true, RED, FEMALE );
//	myNunu.printInfo();
	
//	Aku myAku( 15.0, SILVER, MALE );
//	myAku.printInfo();
	
//	Palila myPalila( "Kapiolani Regional Park", YELLOW, FEMALE );
//	myPalila.printInfo();
	
//	Nene myNene( "2202-A-802.1", BROWN, FEMALE );
//	myNene.printInfo();
	
#define SIZE_OF_FARM (6)
	
	Animal* myAnimals[ SIZE_OF_FARM ];

	for( int i = 0 ; i < SIZE_OF_FARM ; i++ ) {
		myAnimals[i] = NULL;
	}
	
	myAnimals[0] = &myCat;
//	myAnimals[1] = &myDog;
//	myAnimals[2] = &myNunu;
//	myAnimals[3] = &myAku;
//	myAnimals[4] = &myPalila;
//	myAnimals[5] = &myNene;
	
	cout << endl;
	cout << "Here's what it sounds like around the farm:" << endl;
	
	for( int i = 0 ; i < SIZE_OF_FARM ; i++ ) {
		if( myAnimals[i] != NULL) {
			cout << "   " << myAnimals[i]->speak() << endl;
		}
	}
	
	return 0;
}
