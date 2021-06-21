#include "pch.h"
#include "firefighter.h"

namespace employee
{

PersonType Firefighter::get_type() const noexcept
{
    return PersonTypeComplianceDeclarator::getType<std::decay_t<decltype(*this)>>;
}

} // namespace employee
