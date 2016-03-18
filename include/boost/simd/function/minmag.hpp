//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS
  @copyright 2016 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_MINMAG_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_MINMAG_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{

 /*!

    @ingroup group-ieee
    Function object implementing minmag capabilities

    Returns the input value which have the least absolute value.

    @par Semantic:

    @code
    T r = minmag(x,y);
    @endcode

    is similar to:

    @code
    T r = abs(x) < abs(y) ? x : abs(y) < abs(x) ? y : min(x, y);
    @endcode

   @see min, minnummag, minnum

  **/
  const boost::dispatch::functor<tag::minmag_> minmag = {};
} }
#endif

#include <boost/simd/function/scalar/minmag.hpp>
#include <boost/simd/function/simd/minmag.hpp>

#endif
