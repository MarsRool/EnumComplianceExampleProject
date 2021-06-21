#pragma once

#include "pch.h"

namespace common
{

template <typename EnumType, EnumType E, typename T>
struct EnumClassCompliance : std::integral_constant<EnumType, E>
{
	using Class = T;
};

template <typename EnumType, EnumType E>
struct EnumClassCompliance<EnumType, E, void>
{
	using Class = void;
};

template <typename EnumType, std::size_t _i, std::size_t _size, typename Arg = void, typename ...Args>
struct EnumComplianceDeclaratorIter
	: std::conditional_t<
			static_cast<bool>(sizeof...(Args) > 0) && _i < _size,
			EnumComplianceDeclaratorIter<EnumType, _i + 1, _size, Args...>,
			EnumComplianceDeclaratorIter<EnumType, _size, _size, void, void>>,
		EnumClassCompliance<EnumType, static_cast<EnumType>(_i), Arg>
{
	static constexpr auto i = _i;
	static constexpr auto e = static_cast<EnumType>(_i);
	static constexpr auto hasBase =
			static_cast<bool>(sizeof...(Args) > 0) && _i < _size;
	using Base = std::conditional_t<
		hasBase,
		EnumComplianceDeclaratorIter<EnumType, _i + 1, _size, Args...>,
		EnumComplianceDeclaratorIter<EnumType, _size, _size, void, void>>;
	using Compliance = EnumClassCompliance<EnumType, e, Arg>;
	using Class = typename Compliance::Class;

	template<EnumType E>
	using getClass = std::conditional_t<
		E == e,
		Class,
		typename Base::template getClass<E>>;

    template<typename T>
    static constexpr EnumType getType = std::is_same_v<Class, T>
        ? e
        : Base::template getType<T>;
};

template <typename EnumType, std::size_t _size>
struct EnumComplianceDeclaratorIter<EnumType, _size, _size, void, void>
{
	template<EnumType E>
	using getClass = void;

    template<typename T>
    static constexpr EnumType getType = static_cast<EnumType>(_size);
};

template <typename EnumType, typename ...Args>
struct EnumComplianceDeclarator
	: EnumComplianceDeclaratorIter<
		EnumType, 0, static_cast<std::size_t>(EnumType::Count), Args...>
{
	static constexpr auto count = static_cast<std::size_t>(EnumType::Count);
	static_assert(count > 0,
				  "EnumType should contain \'Count\' Element");
	static_assert(count == sizeof...(Args),
				  "Classes count should correspond EnumType::Count");

	using Base = EnumComplianceDeclaratorIter<
		EnumType, 0, static_cast<std::size_t>(EnumType::Count), Args...>;

	template<EnumType E>
	using getClass = typename Base::template getClass<E>;
    template<typename T>
    static constexpr EnumType getType = Base::template getType<T>;
};

} //common
