#include "pch.h"
#include "police.h"

namespace employee
{

PersonType Police::get_type() const noexcept
{
    return PersonTypeComplianceDeclarator::getType<std::decay_t<decltype(*this)>>;
}

} // namespace employee
