#pragma once
#include "employee.h"

namespace employee
{

class Artist: public Employee
{
public:
    Artist() = default;

    virtual PersonType get_type() const noexcept override;
};

} // namespace employee
