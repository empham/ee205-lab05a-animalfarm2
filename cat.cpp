///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 05a - Animal Farm 2
///
/// @file cat.cpp
/// @version 1.0
///
/// Exports data about all cats
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @brief  Lab 05a - AnimalFarm2 - EE 205 - Spr 2021
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////

#include <string>
#include <iostream>

#include "cat.hpp"

using namespace std;

namespace animalfarm {
	
Cat::Cat( string newName, enum Color newColor, enum Gender newGender ) {
	gender = newGender;         /// Get from the constructor... not all cats are the same gender (this is a has-a relationship)
	species = "Felis catus";    /// Hardcode this... all cats are the same species (this is a is-a relationship)
	hairColor = newColor;       /// A has-a relationship, so it comes through the constructor
	gestationPeriod = 60;       /// An is-a relationship, so it's safe to hardcode.  All cats have the same gestation period.
	name = newName;             /// A has-a relationship.  Every cat has its own name.
}


const string Cat::speak() {
	return string( "Meow" );
}


/// Print our Cat and name first... then print whatever information Mammal holds.
void Cat::printInfo() {
	cout << "Cat Name = [" << name << "]" << endl;
	Mammal::printInfo();
}

} // namespace animalfarm
