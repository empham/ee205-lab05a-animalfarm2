///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 05a - Animal Farm 2
///
/// @file cat.hpp
/// @version 1.0
///
/// Exports data about all cats
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @brief  Lab 05a - AnimalFarm2 - EE 205 - Spr 2021
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>

#include "mammal.hpp"

using namespace std;


namespace animalfarm {

class Cat : public Mammal {
public:
	string name;
	
	Cat( string newName, enum Color newColor, enum Gender newGender );
	
	virtual const string speak();

	void printInfo();
};

} // namespace animalfarm
