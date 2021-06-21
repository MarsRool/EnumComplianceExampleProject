#pragma once

#include "pch.h"
#include "enum_class_compliance.h"

namespace employee
{

enum class PersonType : std::uint16_t
{
    Undefined = 0,
    Employee,
    Engeneer,
    Artist,
    Astronaut,
    Chef,
    ConstructionWorker,
    Firefighter,
    Doctor,
    Police,
	Count
};

struct PersonTypeComplianceDeclarator
    : common::EnumComplianceDeclarator<PersonType, void,
        class Employee,
        class Engeneer,
        class Artist,
        class Astronaut,
        class Chef,
        class ConstructionWorker,
        class Firefighter,
        class Doctor,
        class Police>
{};

} // namespace employee
