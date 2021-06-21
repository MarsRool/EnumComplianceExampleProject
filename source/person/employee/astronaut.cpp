#include "pch.h"
#include "astronaut.h"

namespace employee
{

PersonType Astronaut::get_type() const noexcept
{
    return PersonTypeComplianceDeclarator::getType<std::decay_t<decltype(*this)>>;
}

} // namespace employee
