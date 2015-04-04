/*======================================================================
 * Date.cpp
 * Author : Guillaume LEGRU
 * Date : 03/04/2015
 *
 * A time format for my schedule project.
 *======================================================================*/

#include <ctime>
#include <iostream>

#include "Date.hpp"

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

Date::Date(int day, int month, int year, int hour, int minutes) :
	day_(day),month_(month),year_(year), hour_(hour), minutes_(minutes)
{}
