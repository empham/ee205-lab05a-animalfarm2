///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 05a - Animal Farm 2
///
/// @file animal.cpp
/// @version 1.0
///
/// Exports data about all animals
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @brief  Lab 05a - AnimalFarm2 - EE 205 - Spr 2021
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

#include "animal.hpp"

using namespace std;

namespace animalfarm {
	
void Animal::printInfo() {
	cout << "   Species = [" << species << "]" << endl;
	cout << "   Gender = [" << genderName( gender ) << "]" << endl;
}


string Animal::genderName (enum Gender gender) {
   switch (gender) {
      case MALE:    return string("Male"); break;
      case FEMALE:  return string("Female"); break;
      case UNKNOWN: return string("Unknown"); break;
   }

   return string("Really, really Unknown");
};
	

string Animal::colorName (enum Color color) {
	/// @todo Implement this based on genderName and your work
	///       on Animal Farm 1
   return string("Unknown");
};
	
} // namespace animalfarm
