#include "pch.h"
#include "police.h"

namespace employee
{

PersonType Police::get_type() const noexcept
{
    return PersonType::Police;
}

} // namespace employee
