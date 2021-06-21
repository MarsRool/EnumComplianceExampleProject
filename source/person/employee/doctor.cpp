#include "pch.h"
#include "doctor.h"

namespace employee
{

PersonType Doctor::get_type() const noexcept
{
    return PersonTypeComplianceDeclarator::getType<std::decay_t<decltype(*this)>>;
}

} // namespace employee
