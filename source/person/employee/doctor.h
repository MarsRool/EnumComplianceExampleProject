#pragma once
#include "employee.h"

namespace employee
{

class Doctor: public Employee
{
public:
    Doctor() = default;

    virtual PersonType get_type() const noexcept override;
};

} // namespace employee
