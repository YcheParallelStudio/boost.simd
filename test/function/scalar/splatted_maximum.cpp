//==================================================================================================
/*!

  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/function/scalar/splatted_maximum.hpp>
#include <scalar_test.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>
#include <boost/simd/constant/inf.hpp>
#include <boost/simd/constant/minf.hpp>
#include <boost/simd/constant/mone.hpp>
#include <boost/simd/constant/nan.hpp>
#include <boost/simd/constant/one.hpp>
#include <boost/simd/constant/zero.hpp>
#include <boost/simd/constant/pi.hpp>
#include <boost/simd/constant/three.hpp>



STF_CASE_TPL (" splatted_maximum ",  STF_NUMERIC_TYPES)
{
  namespace bs = boost::simd;

  using bs::splatted_maximum;

  // return type conformity test
   STF_EXPR_IS(splatted_maximum(T()), T);

  // specific values tests
  STF_EQUAL(splatted_maximum(bs::One<T>()), bs::One<T>());
  STF_EQUAL(splatted_maximum(bs::Zero<T>()), bs::Zero<T>());
} // end of test for signed_int_


