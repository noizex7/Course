#include "Instructor.h"

Instructor::Instructor()
{
    lastName = "";
    firstName = "";
    officeNumber = "";
    email = "";
}

Instructor::Instructor(string lname, string fname, string office, string aEmail)
{
    set(lname, fname, office, aEmail);
}

Instructor::Instructor(const Instructor& aInstructor)
{
    set(aInstructor.getLastName(), aInstructor.getFirstName(),
        aInstructor.getOfficeNumber(), aInstructor.getEmail());
}

void Instructor::set(string lname, string fname, string office, string aEmail)
{
    setLastName(lname);
    setFirstName(fname);
    setOfficeNumber(office);
    setEmail(aEmail);
}

void Instructor::setLastName(string lname)
{
    lastName = lname;
}

void Instructor::setFirstName(string fname)
{
    firstName = fname;
}

void Instructor::setOfficeNumber(string office)
{
    officeNumber = office;
}

void Instructor::setEmail(string aEmail)
{
    email = aEmail;
}

string Instructor::getLastName() const
{
    return lastName;
}

string Instructor::getFirstName() const
{
    return firstName;
}

string Instructor::getOfficeNumber() const
{
    return officeNumber;
}

string Instructor::getEmail() const
{
    return email;
}

void Instructor::print() const
{

}

ostream& operator<< (ostream& strm, const Instructor& obj)
{
    strm << setw(35) << left << obj.lastName << ", " << obj.firstName << setw(6)
        << left << obj.officeNumber << setw(40) << left << obj.email;
    return strm;
}

istream& operator>> (istream& strm, Instructor& obj)
{
    cin.clear();

    cout << "Enter the instructor's Last Name:\n";
    getline(cin, obj.lastName);

    cin.clear();

    cout << "Enter the instructo's First Name:\n";
    getline(cin, obj.firstName);

    cin.clear();

    cout << "Enter the instructor's Office Number:\n";
    getline(cin, obj.officeNumber);

    cin.clear();

    cout << "Enter the instructor's Email:\n";
    getline(cin, obj.email);

    cin.clear();

    return strm;
}
