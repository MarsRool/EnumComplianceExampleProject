#include "pch.h"
#include "chef.h"

namespace employee
{

PersonType Chef::get_type() const noexcept
{
    return PersonTypeComplianceDeclarator::getType<std::decay_t<decltype(*this)>>;
}

} // namespace employee
