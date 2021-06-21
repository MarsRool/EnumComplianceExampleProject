#include "pch.h"
#include "doctor.h"

namespace employee
{

PersonType Doctor::get_type() const noexcept
{
    return PersonType::Doctor;
}

} // namespace employee
