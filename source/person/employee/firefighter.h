#pragma once
#include "employee.h"

namespace employee
{

class Firefighter: public Employee
{
public:
    Firefighter() = default;

    virtual PersonType get_type() const noexcept override;
};

} // namespace employee
