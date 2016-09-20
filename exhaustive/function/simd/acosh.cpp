
//==============================================================================
//         Copyright 2016        Numscale SAS
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#include <boost/simd/function/simd/acosh.hpp>
#include <boost/simd/constant/one.hpp>
#include <boost/simd/constant/valmax.hpp>
#include <boost/simd/pack.hpp>
#include <exhaustive.hpp>

#include <cmath>
#include <cstdlib>

struct raw_acosh
{
  float operator()(float x) const
  {
    return std::acosh(double(x));
  }
};

int main(int argc, char* argv[])
{
  float mini = bs::One<float>(); // acosh is Nan under
  float maxi = bs::Valmax<float>();  // acosh is Nan above
  if(argc >= 2) mini = std::atof(argv[1]);
  if(argc >= 3) maxi = std::atof(argv[2]);
  bs::exhaustive_test<bs::pack<float>> ( mini
                                       , maxi
                                       , bs::acosh
                                       , raw_acosh()
                                       );

  return 0;
}