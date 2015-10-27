//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_ROL_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_ROL_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-bitwise

    Returns the first entry rotated left
    by the absolute value of the second entry.

    @par semantic:
    For any given value @c x of type @c T, n  of type @c I:

    @code
    T r = rol(x, n);
    @endcode

    @see  ror, rrol, rror

    @return      a value of the same type as the first input.


**/
  template<typename T> auto rol(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-bitwise

      Function object tied to simd::rol

      @see simd::rol
    **/
    const boost::dispatch::functor<tag::rol_> rol = {};
  }
} }
#endif

#include <boost/simd/function/definition/rol.hpp>
#include <boost/simd/arch/common/generic/function/rol.hpp>
//#include <boost/simd/arch/common/function/simd/rol.hpp>

#endif