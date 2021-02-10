///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 05a - Animal Farm 2
///
/// @file animal.hpp
/// @version 1.0
///
/// Exports data about all animals
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @brief  Lab 05a - AnimalFarm2 - EE 205 - Spr 2021
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////

#pragma once

using namespace std;

#include <string>

namespace animalfarm {

enum Gender { MALE, FEMALE, UNKNOWN };

enum Color { BLACK };  /// @todo Add more colors

class Animal {
public:
	enum Gender gender;
	string      species;

	virtual const string speak() = 0;
	
	void printInfo();
	
	string colorName  (enum Color color);
	string genderName (enum Gender gender);
};

} // namespace animalfarm
