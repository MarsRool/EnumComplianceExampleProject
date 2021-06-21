#include "pch.h"
#include "astronaut.h"

namespace employee
{

PersonType Astronaut::get_type() const noexcept
{
    return PersonType::Astronaut;
}

} // namespace employee
