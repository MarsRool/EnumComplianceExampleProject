#include "pch.h"
#include "artist.h"

namespace employee
{

PersonType Artist::get_type() const noexcept
{
    return PersonType::Artist;
}

} // namespace employee
