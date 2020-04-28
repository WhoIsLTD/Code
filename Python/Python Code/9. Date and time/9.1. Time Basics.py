# Python and time format #Time tuple #getting current time # Basic Calender

import time;
import calendar;

ticks = time.time()
print(ticks)


#year, months, Day, hours , minutes, second, DoW, doy, Daylightsaving,

print(time.localtime())

#Currenttime


#formatted time

print(time.asctime(time.localtime(time.time())))

#getting calender
print(calendar.month(2019, 7))