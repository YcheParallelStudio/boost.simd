##===================================================================================================
##                              Copyright 2016 NumScale SAS
##
##                   Distributed under the Boost Software License, Version 1.0.
##                        See accompanying file LICENSE.txt or copy at
##                            http://www.boost.org/LICENSE_1_0.txt
##===================================================================================================

## Larger test suites go there
add_subdirectory(combine)
add_subdirectory(extract)
add_subdirectory(genmask)
add_subdirectory(insert)
add_subdirectory(load)
add_subdirectory(aligned_load)
add_subdirectory(make)
add_subdirectory(shuffle)
add_subdirectory(slice)
add_subdirectory(slide)
add_subdirectory(splat)
add_subdirectory(split)

set ( SOURCES
abs.cpp
abs_s.cpp
acos.cpp
acos.accurate.cpp
acosd.cpp
acosd.accurate.cpp
acospi.cpp
acospi.accurate.cpp
acot.cpp
acotd.cpp
acotpi.cpp
acosh.cpp
acoth.cpp
aligned_store.cpp
all.cpp
arg.cpp
any.cpp
acsc.cpp
acscd.cpp
acscpi.cpp
asec.cpp
asecd.cpp
asecpi.cpp
asin.cpp
asind.cpp
asinpi.cpp
atan.cpp
atan2.cpp
atan2d.cpp
atan2pi.cpp
atand.cpp
atanpi.cpp
asinh.cpp
atanh.cpp
autofold.cpp
autosplat.cpp
average.cpp
bitfloating.cpp
bitinteger.cpp
bitget.cpp
bitset.cpp
bitwise_and.cpp
bitwise_andnot.cpp
bitwise_cast.cpp
bitwise_notand.cpp
bitwise_notor.cpp
bitwise_or.cpp
bitwise_ornot.cpp
bitwise_select.cpp
bitwise_xor.cpp
broadcast.cpp
cbrt.cpp
ceil.cpp
clz.cpp
complement.cpp
compare_equal.cpp
compare_greater.cpp
compare_greater_equal.cpp
compare_less.cpp
compare_less_equal.cpp
compare_not_equal.cpp
conj.cpp
copysign.cpp
correct_fma.cpp
cos.cpp
cosd.cpp
cospi.cpp
cot.cpp
cotd.cpp
cotpi.cpp
cosh.cpp
coth.cpp
ctz.cpp
cummin.cpp
cummax.cpp
cumprod.cpp
cumsum.cpp
dec.cpp
dec_s.cpp
deinterleave.cpp
deinterleave_first.cpp
deinterleave_second.cpp
dist.cpp
dist_s.cpp
divceil.cpp
divfix.cpp
divfloor.cpp
divround.cpp
divnearbyint.cpp
divtrunc.cpp
divides.cpp
divides_s.cpp
erf.cpp
erfc.cpp
erfcx.cpp
exp.cpp
exp2.cpp
expm1.cpp
exprecneg.cpp
exprecnegc.cpp
expx2.cpp
enumerate.cpp
ffs.cpp
firstbitset.cpp
firstbitunset.cpp
floor.cpp
fma.cpp
fms.cpp
fnma.cpp
fnms.cpp
frac.cpp
frexp.cpp
gamma.cpp
gammaln.cpp
genmaskc.cpp
group.cpp
groups.cpp
hi.cpp
hmsb.cpp
hypot.cpp
iceil.cpp
idivfix.cpp
idivfloor.cpp
idivceil.cpp
idivround.cpp
idivnearbyint.cpp
if_allbits_else.cpp
if_else_allbits.cpp
if_else.cpp
if_else_zero.cpp
ifloor.cpp
ifnot_plus.cpp
ifnot_dec.cpp
ifnot_inc.cpp
ifnot_minus.cpp
if_one_else_zero.cpp
if_zero_else.cpp
if_zero_else_one.cpp
ilog2.cpp
ilogb.cpp
inc.cpp
inc_s.cpp
indeg.cpp
inrad.cpp
interleave.cpp
interleave_first.cpp
interleave_second.cpp
interleave_even.cpp
interleave_odd.cpp
inearbyint.cpp
iround.cpp
is_denormal.cpp
is_equal.cpp
is_equal_with_equal_nans.cpp
is_eqz.cpp
is_even.cpp
is_finite.cpp
is_flint.cpp
is_gez.cpp
is_greater.cpp
is_greater_equal.cpp
is_gtz.cpp
is_imag.cpp
is_invalid.cpp
is_inf.cpp
is_less.cpp
is_less_equal.cpp
is_lessgreater.cpp
is_lez.cpp
is_ltz.cpp
is_nan.cpp
is_negative.cpp
is_nez.cpp
is_ngez.cpp
is_ngtz.cpp
is_nlez.cpp
is_nltz.cpp
is_normal.cpp
is_not_denormal.cpp
is_not_equal.cpp
is_not_greater.cpp
is_not_greater_equal.cpp
is_not_infinite.cpp
is_not_less.cpp
is_not_less_equal.cpp
is_not_nan.cpp
is_not_real.cpp
is_odd.cpp
is_ord.cpp
is_positive.cpp
is_real.cpp
is_unord.cpp
ldexp.cpp
lo.cpp
log.cpp
log10.cpp
log1p.cpp
log2.cpp
logical_and.cpp
logical_andnot.cpp
logical_notand.cpp
logical_not.cpp
logical_notor.cpp
logical_or.cpp
logical_ornot.cpp
logical_xor.cpp
lookup.cpp
majority.cpp
mantissa.cpp
max.cpp
maximum.cpp
maxmag.cpp
maxnum.cpp
maxnummag.cpp
meanof.cpp
min.cpp
minimum.cpp
minmag.cpp
minnum.cpp
minnummag.cpp
minus.cpp
minus_s.cpp
modf.cpp
multiplies.cpp
multiplies_s.cpp
nbtrue.cpp
negate.cpp
negatenz.cpp
negif.cpp
negifnot.cpp
nextafter.cpp
next.cpp
none.cpp
nthroot.cpp
oneminus.cpp
oneminus_s.cpp
plus.cpp
plus_s.cpp
pow.cpp
pow_abs.cpp
predecessor.cpp
prev.cpp
prod.cpp
rec.cpp
rem.cpp
remround.cpp
remnearbyint.cpp
remfloor.cpp
remceil.cpp
rem_pio2.cpp
rem_pio2_cephes.cpp
rem_pio2_medium.cpp
rem_pio2_straight.cpp
remquo.cpp
repeat_lower_half.cpp
repeat_upper_half.cpp
reversebits.cpp
reverse.cpp
rol.cpp
ror.cpp
round.cpp
nearbyint.cpp
rsqrt.cpp
safe_max.cpp
safe_min.cpp
if_plus.cpp
if_dec.cpp
if_inc.cpp
if_minus.cpp
shift_left.cpp
shift_right.cpp
sign.cpp
significants.cpp
signnz.cpp
sin.cpp
sinc.cpp
sincpi.cpp
sincos.cpp
sincosd.cpp
sincospi.cpp
sind.cpp
sinpi.cpp
split_multiplies.cpp
sinhcosh.cpp
sinh.cpp
sinhc.cpp
tanh.cpp
sqr_abs.cpp
sqr.cpp
sqr_s.cpp
sqrt1pm1.cpp
sqrt.cpp
stirling.cpp
store.cpp
successor.cpp
sum.cpp
tan.cpp
tand.cpp
tanpi.cpp
tenpower.cpp
tofloat.cpp
toint.cpp
toint_s.cpp
touint.cpp
touint_s.cpp
trunc.cpp
two_add.cpp
two_prod.cpp
two_split.cpp
ulpdist.cpp
twopower.cpp
unary_minus.cpp
unary_minus_s.cpp
unary_plus.cpp
)

make_unit( "function.simd"  ${SOURCES})
make_coverage("function.simd"  ${SOURCES})
