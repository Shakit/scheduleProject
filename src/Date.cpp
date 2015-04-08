/*======================================================================
 * Date.cpp
 * Author : Guillaume LEGRU
 * Date : 03/04/2015
 *
 * A time format for my schedule project.
 *======================================================================*/

#include <ctime>
#include <iostream>
#include <string>

#include "Date.hpp"

/*============================================================*/
/* STATIC FUNTION */
std::string stringOfInt(int n)
{
	std::string s = std::to_string(n);
	if (n<10) return "0"+s;
	return s;
}

/*============================================================*/
/* CONTRUCTORS */

/* Empty */
Date::Date()
{
	time_t t = time(0);
	struct tm * currentDate = localtime( &t );
	day_= currentDate->tm_mday;
	month_= currentDate->tm_mon + 1;
	year_= currentDate->tm_year + 1900;
	hour_= currentDate->tm_hour;
	minutes_=currentDate->tm_min;
}

/* Fixing drectly all paramameters */
Date::Date(int day, int month, int year, int hour, int minutes) :
	day_(day),month_(month),year_(year), hour_(hour), minutes_(minutes)
{}

/*============================================================*/
/* OTHER METHODS */

/*display(void): void
  -> a human readable display of date
 */
void Date::display()
{
	std::cout << stringOfInt(day_) << "."
			  << stringOfInt(month_) << "."
			  << stringOfInt(year_) << " at "
			  << stringOfInt(hour_) << ":"
			  << stringOfInt(minutes_)
			  << std::endl;
}
