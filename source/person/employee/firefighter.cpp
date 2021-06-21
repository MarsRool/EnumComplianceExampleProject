#include "pch.h"
#include "firefighter.h"

namespace employee
{

PersonType Firefighter::get_type() const noexcept
{
    return PersonType::Firefighter;
}

} // namespace employee
