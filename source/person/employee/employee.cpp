#include "pch.h"
#include "employee.h"

namespace employee
{

PersonType Employee::get_type() const noexcept
{
    return PersonType::Employee;
}

} // namespace employee
