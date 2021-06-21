#include "pch.h"
#include "chef.h"

namespace employee
{

PersonType Chef::get_type() const noexcept
{
    return PersonType::Chef;
}

} // namespace employee
