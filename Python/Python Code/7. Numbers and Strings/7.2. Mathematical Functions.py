# abs(x) The absolute value of x: the (positive) distance between x and zero. Build in
# ceil(x) The ceiling of x: the smallest integer not less than x.
# exp(x) The exponential of x: e^x
# fabs(x) The absolute value of x.
# floor(x) The floor of x: the largest integer not greater than x.
# log(x) The natural logarithm of x, for x> 0.
# log10(x) The base-10 logarithm of x for x> 0.
# max(x1, x2,...) The largest of its arguments: the value closest to positive infinity.
# min(x1, x2,...) The smallest of its arguments: the value closest to negative infinity.
# pow(x, y) The value of x**y.
# sqrt(x) The square root of x for x > 0.
import math
a = 40
b = -40
c = 10.01
d = 10.7

print('abs function', abs(b))
print('ceil function', math.ceil(c))
print('exp function', math.exp(a))
print('fabs function', math.fabs(b))
print('floor function', math.floor(d))
print('power function', math.pow(3,3))
print('Log function', math.log(100))
print('Log 10 function', math.log10(100))
print('Square root function', math.sqrt(225))