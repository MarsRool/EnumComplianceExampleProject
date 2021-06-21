#pragma once
#include "employee.h"

namespace employee
{

class Engeneer: public Employee
{
public:
    Engeneer() = default;

    virtual PersonType get_type() const noexcept override;
};

} // namespace employee
