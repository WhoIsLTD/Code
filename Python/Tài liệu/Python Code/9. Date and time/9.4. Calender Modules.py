# calendar.calendar(year,w=2,l=1,c=6)
# Returns a multiline string with a calendar for year year formatted into three
# columns separated by c spaces. w is the width in characters of each date; each
# line has length 21*w+18+2*c. l is the number of lines for each week.
# calendar.firstweekday( )
# Returns the current setting for the weekday that starts each week. By default,
# when calendar is first imported, this is 0, meaning Monday.
# calendar.isleap(year)
# Returns True if year is a leap year; otherwise, False.
# calendar.leapdays(y1,y2)
# Returns the total number of leap days in the years within range(y1,y2).
# calendar.month(year,month,w=2,l=1)
# Returns a multiline string with a calendar for month month of year year, one line
# per week plus two header lines. w is the width in characters of each date; each
# line has length 7*w+6. l is the number of lines for each week.
# calendar.monthcalendar(year,month)
# Returns a list of lists of ints. Each sublist denotes a week. Days outside month
# month of year year are set to 0; days within the month are set to their day-ofmonth,
# 1 and up.
# calendar.monthrange(year,month)
# Returns two integers. The first one is the code of the weekday for the first day of
# the month month in year year; the second one is the number of days in the month.
# Weekday codes are 0 (Monday) to 6 (Sunday); month numbers are 1 to 12.
# calendar.prcal(year,w=2,l=1,c=6)
# Like print calendar.calendar(year,w,l,c).
# calendar.prmonth(year,month,w=2,l=1)
# Like print calendar.month(year,month,w,l).
# calendar.setfirstweekday(weekday)
# Sets the first day of each week to weekday code weekday. Weekday codes are 0
# (Monday) to 6 (Sunday).
# calendar.timegm(tupletime)
# The inverse of time.gmtime: accepts a time instant in time-tuple form and returns
# the same instant as a floating-point number of seconds since the epoch.
# calendar.weekday(year,month,day)
# Returns the weekday code for the given date. Weekday codes are 0 (Monday) to
# 6 (Sunday); month numbers are 1 (January) to 12 (December).

import calendar;
import calendar;
print(calendar.monthcalendar(2019, 6))