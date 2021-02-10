///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 05a - Animal Farm 2
///
/// @file mammal.cpp
/// @version 1.0
///
/// Exports data about all mammals
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @brief  Lab 05a - AnimalFarm2 - EE 205 - Spr 2021
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////

#include <iostream> 

#include "mammal.hpp"

using namespace std;

namespace animalfarm {
	
void Mammal::printInfo() {
	Animal::printInfo();
	cout << "   Hair Color = [" << colorName( hairColor ) << "]" << endl;
	cout << "   Gestation Period = [" << gestationPeriod << "]" << endl;
}

} // namespace animalfarm
