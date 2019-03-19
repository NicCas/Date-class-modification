#include <iostream>

using namespace std;

class Date{
    int month;
    int date;
    int year;

    string months [12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
public:
    Date (int m, int d, int y){
        month = m;
        date = d;
        year = y;
    }
    void printNumber(){
        cout << month << "/" << date << "/" << year << endl;
    }
    void printMonthFirst () {
        cout << months[month - 1] << " " << date << ", " << year << endl;
    }
    void printDayFirst () {
        cout << date << " " << months[month - 1] << " " << year << endl;
    }
};

int main() {
    // Chapter 14 pg 887 #8
    /*
     * Modify the Date class in Programming Challenge 1 of Chapter 13.
     *
     * (
     *      Design a class called Date. The class should store a date in three integers: month, day, and year.
     *      There should be member functions to print the date in the following forms:
     *          12/25/2014
     *          December 25, 2014
     *          25 December 2014
     *      Demonstrate the class by writing a complete program implementing it.
     *
     *      Input Validation: Do not accept values for the day greater than 31 or less than 1. Do not accept values
     *      for the month greater than 12 or less than 1.
     * )
     *
     * The new version should have the following
     * overloaded operators:
     *
     *      ++  Prefix and postfix increment operators. These operators should increment the object's day member.
     *
     *      −−  Prefix and postfix decrement operators. These operators should decrement the object's day member.
     *
     *      −   Subtraction operator. If one Date object is subtracted from another, the operator should give the
     *          number of days between the two dates. For example, if April 10, 2014 is subtracted from April 18,
     *          2014, the result will be 8.
     *
     *      <<  cout’s stream insertion operator. This operator should cause the date to be dis- played in the form
     *          April 18, 2014
     *
     *      >>  cin’s stream extraction operator. This operator should prompt the user for a date to be stored in a
     *      Date object.
     *
     * The class should detect the following conditions and handle them accordingly:
     *
     *      • When a date is set to the last day of the month and incremented, it should become the first day of the
     *        following month.
     *
     *      • When a date is set to December 31 and incremented, it should become January 1 of the following year.
     *
     *      • When a day is set to the first day of the month and decremented, it should become the last day of the
     *        previous month.
     *
     *      • When a date is set to January 1 and decremented, it should become December 31 of the previous year.
     *
     * Demonstrate the class’s capabilities in a simple program.
     *
     * Input Validation: The overloaded >> operator should not accept invalid dates. For example, the date 13/45/2014
     * should not be accepted.
     *
     */

    Date christmas = Date (12, 24, 2000);

    christmas.printNumber();
    christmas.printMonthFirst();
    christmas.printDayFirst ();

    return 0;
}