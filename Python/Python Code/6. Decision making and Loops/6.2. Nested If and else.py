#if expression4:
#   statement(s)
#else:
#   statement(s)


a = 12
if a > 10:
    print('a greater than 10')
else:
    print('a not greater than 10')

#if expression1:
#    statement(s)
#    if expression2:
#        statement(s)
#    elif expression3:
#    statement(s)
#    else
#    statement(s)
#elif expression4:
#   statement(s)
#else:
#   statement(s)

if (a % 10) == 0:
    print('a is divisble by 10')
    if a%5 == 0:
        print('LCM of a is 5')
    else:
        print('LCM of a is 10')
else:
    print('LCM is not 5 or 10')