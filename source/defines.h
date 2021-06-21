#pragma once

#include "pch.h"

namespace employee
{

using PersonPtr = std::shared_ptr<class Person>;
using PersonContainer = std::vector<PersonPtr>;
using EmployeePtr = std::shared_ptr<class Employee>;
using EmployeeWPtr = std::weak_ptr<class Employee>;

} // namespace employee
