#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#ifndef INSTRUCTOR
#define INSTRUCTOR

// Instructor class
class Instructor
{
private:
    string lastName; // Last name
    string firstName; // First name
    string officeNumber; // Office number
    string email;
public:

    Instructor(); // The default constructor stores empty strings in the string objects.
    // Constructor
    Instructor(string, string, string, string);
    Instructor(const Instructor&);
    // set function
    void set(string, string, string, string);
    void setLastName(string);
    void setFirstName(string);
    void setOfficeNumber(string);
    void setEmail(string);
    string getLastName() const;
    string getFirstName() const;
    string getOfficeNumber() const;
    string getEmail() const;
    void print() const;// print function

    friend ostream& operator<< (ostream&, const Instructor&);
    friend istream& operator>> (istream&, Instructor&);
};
#endif