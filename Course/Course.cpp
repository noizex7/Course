#include "Course.h"

Course::Course()
{
    courseName = "";
    courseCode = "";
}

Course::Course(string course, string code, string instrLastName, string instrFirstName,
    string instrOffice, string instrEmail, string textTitle, string author,
    string Edition, string publisher)
{
    set(course, code, instrLastName, instrFirstName, instrOffice,
        instrEmail, textTitle, author, Edition, publisher);
}

Course::Course(string course, string code, const Instructor instructor,
    const TextBook textbook)
{
    setCourseName(course);
    setCourseCode(code);
    setTextBook(textbook);
    setInstructor(instructor);
}

Course::Course(const Course& aCourse)
{
    setCourseName(aCourse.getCourseName());
    setCourseCode(aCourse.getCourseCode());
    setTextBook(aCourse.getTextBook());
    setInstructor(aCourse.getInstructor());
}

void Course::setCourseName(string course)
{
    courseName = courseName;
}

void Course::setCourseCode(string code)
{
    courseCode = code;
}

void Course::setInstructor(string instrLastName, string instrFirstName, string instrOffice,
    string aEmail)
{
    instructor.set(instrLastName, instrFirstName, instrOffice, aEmail);
}

void Course::setInstructor(const Instructor aInstructor)
{
    instructor = aInstructor;
}

void Course::set(string course, string code, string instrLastName, string instrFirstName,
    string instrOffice, string instrEmail, string textTitle, string author, string Edition,
    string publisher)
{
    setInstructor(instrLastName, instrFirstName, instrOffice, instrEmail);
    setTextBook(textTitle, author, publisher, Edition);
    setCourseName(course);
    setCourseCode(code);
}

void Course::setTextBook(string textTitle, string author, string Edition, string publisher)
{
    textbook.set(textTitle, author, publisher, Edition);
}

void Course::setTextBook(const TextBook aTextbook)
{
    textbook = aTextbook;
}

string Course::getCourseName() const
{
    return courseName;
}

string Course::getCourseCode() const
{
    return courseCode;
}

Instructor Course::getInstructor() const
{
    return instructor;
}

TextBook Course::getTextBook() const
{
    return textbook;
}

void Course::print() const
{

}

ostream& operator<< (ostream& strm, const Course& obj)
{
    strm << setw(15) << left << obj.courseName << setw(15) << left
        << obj.courseCode << obj.instructor << obj.textbook;

    return strm;
}

istream& operator>> (istream& strm, Course& obj)
{

    cin.clear();

    cout << "Enter the Course Name:\n";
    getline(cin, obj.courseName);

    cin.clear();

    cout << "Enter the course code:\n";
    getline(cin, obj.courseCode);

    strm >> obj.instructor;

    strm >> obj.textbook;

    return strm;
}
