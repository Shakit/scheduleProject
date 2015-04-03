/*======================================================================
 * Date.hpp
 * Author : Guillaume LEGRU
 * Date : 03/04/2015
 *
 * A time format for my schedule project.
 *======================================================================*/

#ifndef DATE_HPP
#define DATE_HPP

class Date
{
public :
	/* Constructor */
	Date();
	Date(int day, int month, int year, int hour, int minutes);

	/*getters are not needed yet */
private :
	int day_;
	int month_;
	int year_;
	int hour_;
	int minutes_;
};

#endif //DATE_HPP
