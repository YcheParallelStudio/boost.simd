//==================================================================================================
/*!

  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/function/scalar/div.hpp>
#include <scalar_test.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>
#include <boost/simd/constant/inf.hpp>
#include <boost/simd/constant/minf.hpp>
#include <boost/simd/constant/mone.hpp>
#include <boost/simd/constant/nan.hpp>
#include <boost/simd/constant/one.hpp>
#include <boost/simd/constant/zero.hpp>
#include <boost/simd/constant/valmax.hpp>
#include <boost/simd/constant/valmin.hpp>
#include <boost/simd/constant/mzero.hpp>


STF_CASE_TPL (" idiv real",  STF_IEEE_TYPES)
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;

  using bs::div;
  using r_t = decltype(div(bs::iceil, T(), T()));

#ifndef BOOST_SIMD_NO_INVALIDS
  STF_EQUAL(div(bs::iceil, bs::Inf<T>(), bs::Inf<T>()), bs::Zero<r_t>());
  STF_EQUAL(div(bs::iceil, bs::Minf<T>(), bs::Minf<T>()), bs::Zero<r_t>());
  STF_EQUAL(div(bs::iceil, bs::Nan<T>(), bs::Nan<T>()), bs::Zero<r_t>());
#endif
 STF_EQUAL(div(bs::iceil, bs::Mone<T>(), bs::Mone<T>()), bs::One<r_t>());
  STF_EQUAL(div(bs::iceil, bs::Mone<T>(),bs::Zero<T>()), bs::Minf<r_t>());
  STF_EQUAL(div(bs::iceil, bs::One<T>(), bs::One<T>()), bs::One<r_t>());
  STF_EQUAL(div(bs::iceil, bs::One<T>(),bs::Zero<T>()), bs::Valmax<r_t>());
  STF_EQUAL(div(bs::iceil, bs::One<T>(),bs::Mzero<T>()), bs::Valmin<r_t>());
  STF_EQUAL(div(bs::iceil, bs::Zero<T>(),bs::Zero<T>()), bs::Zero<r_t>());
  STF_EQUAL(div(bs::iceil, T(4),T(3)  ), r_t(2) );
  STF_EQUAL(div(bs::iceil, T(-4),T(-3)), r_t(2) );
  STF_EQUAL(div(bs::iceil, T(-4),T(3) ), r_t(-1));
  STF_EQUAL(div(bs::iceil, T(4),T(-3) ), r_t(-1));
} // end of test for floating_

STF_CASE_TPL (" idiv unsigned_int",  STF_UNSIGNED_INTEGRAL_TYPES)
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;

  using bs::div;
  using r_t = decltype(div(bs::iceil, T(), T()));

  STF_EQUAL(div(bs::iceil, T(4),T(3)), T(2));
  STF_EQUAL(div(bs::iceil, bs::One<T>(), bs::One<T>()), bs::One<r_t>());
  STF_EQUAL(div(bs::iceil, bs::One<T>(), bs::Zero<T>()), bs::Valmax<r_t>());
} // end of test for unsigned_int_

STF_CASE_TPL (" idiv signed_int",  STF_SIGNED_INTEGRAL_TYPES)
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;
  using bs::div;

  using r_t = decltype(div(bs::iceil, T(), T()));

  STF_EQUAL(div(bs::iceil, T(4),T(3)), r_t(2));
  STF_EQUAL(div(bs::iceil, T(-4),T(-3)), r_t(2));
  STF_EQUAL(div(bs::iceil, T(-4),T(3)), r_t(-1));
  STF_EQUAL(div(bs::iceil, T(4),T(-3)), r_t(-1));
  STF_EQUAL(div(bs::iceil, bs::Mone<T>(), bs::Mone<T>()), bs::One<r_t>());
  STF_EQUAL(div(bs::iceil, bs::One<T>(), bs::One<T>()), bs::One<r_t>());
  STF_EQUAL(div(bs::iceil, bs::One<T>(), bs::Zero<T>()), bs::Valmax<r_t>());
  STF_EQUAL(div(bs::iceil, bs::Mone<T>(), bs::Zero<T>()), bs::Valmin<r_t>());

} // end of test for signed_int_


