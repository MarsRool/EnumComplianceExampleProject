#include "pch.h"
#include "engeneer.h"

namespace employee
{

PersonType Engeneer::get_type() const noexcept
{
    return PersonTypeComplianceDeclarator::getType<std::decay_t<decltype(*this)>>;
}

} // namespace employee
