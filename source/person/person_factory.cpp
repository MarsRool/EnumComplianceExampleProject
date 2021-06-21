#include "pch.h"
#include "person_factory.h"

namespace employee
{

PersonFactory& PersonFactory::instance()
{
    static PersonFactory factory;
    return factory;
}

} // namespace employee
