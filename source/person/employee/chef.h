#pragma once
#include "employee.h"

namespace employee
{

class Chef: public Employee
{
public:
    Chef() = default;

    virtual PersonType get_type() const noexcept override;
};

} // namespace employee
