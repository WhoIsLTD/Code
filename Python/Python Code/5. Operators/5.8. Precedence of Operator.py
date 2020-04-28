#  ** Exponentiation (raise to the power)
#  ~ + - Complement, unary plus and minus (method names for the last two are +@ and -@)
#  * / % // Multiply, divide, modulo and floor division
#  + - Addition and subtraction
#  >> << Right and left bitwise shift
#  & Bitwise 'AND'
#  ^ | Bitwise exclusive `OR' and regular `OR'
#  <= < > >= Comparison operators
#  <> == != Equality operators
#  = %= /= //= -= += *=**=  Assignment operators
#  is is not Identity operators
#  in not in Membership operators
#  not or and Logical operators

a = 10
b = 20
c = 15
d = 5
print("a:%.2f b:%d c:%d d:%d"%(a, b, c, d))
e = (a + b) * c / d #( 30 * 15 ) / 5
print("Value of (a + b) * c / d is ", e)
e = ((a + b) * c) / d # (30 * 15 ) / 5
print("Value of ((a + b) * c) / d is ", e)
e = (a + b) * (c / d) # (30) * (15/5)
print("Value of (a + b) * (c / d) is ", e)
e = a + (b * c) / d # 20 + (150/5)
print("Value of a + (b * c) / d is ", e)