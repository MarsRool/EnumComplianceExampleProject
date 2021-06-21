#include "pch.h"
#include "artist.h"

namespace employee
{

PersonType Artist::get_type() const noexcept
{
    return PersonTypeComplianceDeclarator::getType<std::decay_t<decltype(*this)>>;
}

} // namespace employee
