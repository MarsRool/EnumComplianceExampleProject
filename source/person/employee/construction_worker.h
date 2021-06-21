#pragma once
#include "employee.h"

namespace employee
{

class ConstructionWorker: public Employee
{
public:
    ConstructionWorker() = default;

    virtual PersonType get_type() const noexcept override;
};

} // namespace employee
