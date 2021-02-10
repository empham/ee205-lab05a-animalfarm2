///////////////////////////////////////////////////////////////////////////////
/// University of Hawaii, College of Engineering
/// EE 205  - Object Oriented Programming
/// Lab 05a - Animal Farm 2
///
/// @file mammal.hpp
/// @version 1.0
///
/// Exports data about all mammals
///
/// @author @todo yourName <@todo yourMail@hawaii.edu>
/// @brief  Lab 05a - AnimalFarm2 - EE 205 - Spr 2021
/// @date   @todo dd_mmm_yyyy
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "animal.hpp"

namespace animalfarm {

class Mammal : public Animal {
public:
	enum Color hairColor;
	int        gestationPeriod;
	
	void printInfo();
};

} // namespace animalfarm
