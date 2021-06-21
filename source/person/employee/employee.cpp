#include "pch.h"
#include "employee.h"

namespace employee
{

PersonType Employee::get_type() const noexcept
{
    return PersonTypeComplianceDeclarator::getType<std::decay_t<decltype(*this)>>;
}

} // namespace employee
