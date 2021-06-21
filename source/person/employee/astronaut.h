#pragma once
#include "employee.h"

namespace employee
{

class Astronaut: public Employee
{
public:
    Astronaut() = default;

    virtual PersonType get_type() const noexcept override;
};

} // namespace employee
