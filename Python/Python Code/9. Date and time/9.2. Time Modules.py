#Functions

# time.altzone - The offset of the local DST timezone, in seconds west of UTC, if one is defined. This is negative if the local DST
# timezone is east of UTC (as in Western Europe, including the UK). Use this if the daylight is nonzero.
# time.asctime([tupletime]) - Accepts a time-tuple and returns a readable 24-character string such as 'Tue Dec
# 11 18:07:14 2008'.
# time.clock( ) - Returns the current CPU time as a floating-point number of seconds. To measure computational costs
# of different approaches, the value of time.clock is more useful than that of time.time().
# time.ctime([secs]) - Like asctime(localtime(secs)) and without arguments is like asctime( )
# time.gmtime([secs]) - Accepts an instant expressed in seconds since the epoch and returns a time-tuple
# t with the UTC time. Note : t.tm_isdst is always 0
# time.localtime([secs]) - Accepts an instant expressed in seconds since the epoch and returns a time-tuple
# t with the local time (t.tm_isdst is 0 or 1, depending on whether DST applies to instant secs by local rules).
# time.mktime(tupletime) - Accepts an instant expressed as a time-tuple in local time and returns a floatingpoint
# value with the instant expressed in seconds since the epoch.
# time.sleep(secs) - Suspends the calling thread for secs seconds.
# time.strftime(fmt[,tupletime]) - Accepts an instant expressed as a time-tuple in local time and returns a string
# representing the instant as specified by string fmt.
# time.strptime(str,fmt='%a %b %d %H:%M:%S %Y') - Parses str according to format string fmt and returns the instant in time-tuple format.
# time.time( ) - Returns the current time instant, a floating-point number of seconds since the epoch.
# time.tzset() - Resets the time conversion rules used by the library routines. The environment
# variable TZ specifies how this is done.

import time;
print(time.asctime())
print(time.gmtime())
print(time.localtime())
print(time.tzset())