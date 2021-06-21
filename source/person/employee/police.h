#pragma once
#include "employee.h"

namespace employee
{

class Police: public Employee
{
public:
    Police() = default;

    virtual PersonType get_type() const noexcept override;
};

} // namespace employee
