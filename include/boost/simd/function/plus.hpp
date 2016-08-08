//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS
  @copyright 2016 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_PLUS_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_PLUS_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!
    @ingroup group-operator
    Function object implementing plus capabilities

    Perform the sum of two parameters of the same type.

    @par Semantic

    For any value @c a and @c b of type @c T,

    @code
    T x = plus(a,b);
    @endcode

    returns the sum of @c a and @c b

  **/
  Value plus(Value const & x, Value const& y);
} }
#endif

#include <boost/simd/function/scalar/plus.hpp>
#include <boost/simd/function/simd/plus.hpp>

#endif
