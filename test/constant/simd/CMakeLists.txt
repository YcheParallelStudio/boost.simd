##===================================================================================================
##                              Copyright 2016 NumScale SAS
##
##                   Distributed under the Boost Software License, Version 1.0.
##                        See accompanying file LICENSE.txt or copy at
##                            http://www.boost.org/LICENSE_1_0.txt
##===================================================================================================

set ( SOURCES
allbits.cpp
bitincrement.cpp
cgold.cpp
constant.cpp
deginrad.cpp
eight.cpp
eleven.cpp
eps.cpp
euler.cpp
exp_1.cpp
fact_10.cpp
fact_11.cpp
fact_12.cpp
fact_4.cpp
fact_5.cpp
fact_6.cpp
fact_7.cpp
fact_8.cpp
fact_9.cpp
false.cpp
fifteen.cpp
five.cpp
four.cpp
fouropi.cpp
fourpi.cpp
fourthrooteps.cpp
goldbar.cpp
gold.cpp
greatestnoninteger.cpp
half.cpp
halfeps.cpp
hundred.cpp
inf.cpp
inv2pi.cpp
invexp_1.cpp
invlog10_2.cpp
invlog_10.cpp
invlog_2.cpp
invpi.cpp
invsqrt_2pi.cpp
log_10.cpp
log10_pi.cpp
log_2.cpp
log2_e.cpp
log2_em1.cpp
log_2olog_10.cpp
logeps.cpp
logpi.cpp
logsqrt2pi.cpp
meight.cpp
mfive.cpp
mfour.cpp
mhalf.cpp
mindenormal.cpp
minf.cpp
mlog10two2nmb.cpp
mlog2two2nmb.cpp
mlogeps2.cpp
mlogtwo2nmb.cpp
mnine.cpp
mone.cpp
mseven.cpp
msix.cpp
mten.cpp
mthree.cpp
mtwo.cpp
mzero.cpp
nan.cpp
nbdigits.cpp
nbexponentbits.cpp
nbmantissabits.cpp
nine.cpp
one.cpp
oneosqrt5.cpp
oneosqrteps.cpp
oneotwoeps.cpp
pi.cpp
pio2_3.cpp
pio_2.cpp
pio_3.cpp
pio_4.cpp
pio_6.cpp
quarter.cpp
radindeg.cpp
ratio.cpp
real.cpp
seven.cpp
signmask.cpp
six.cpp
sixteen.cpp
smallestposval.cpp
sqrt_1o_5.cpp
sqrt_2.cpp
sqrt_2o_2.cpp
sqrt_2o_3.cpp
sqrt_2opi.cpp
sqrt_2pi.cpp
sqrteps.cpp
sqrtpio_2.cpp
sqrtsmallestposval.cpp
sqrtvalmax.cpp
tan_3pio_8.cpp
tanpio_8.cpp
ten.cpp
third.cpp
thirdrooteps.cpp
thousand.cpp
three.cpp
threeeps.cpp
threepio_4.cpp
true.cpp
twelve.cpp
twenty.cpp
two.cpp
twoopi.cpp
twopi.cpp
twopio_3.cpp
twoto31.cpp
twotom10.cpp
twotomnmbo_3.cpp
twotonmb.cpp
valmax.cpp
valmin.cpp
zero.cpp
  )

make_unit( "constant.simd"     ${SOURCES})
make_coverage("constant.simd"  ${SOURCES})
