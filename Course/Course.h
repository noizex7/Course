#include "Instructor.h"
#include "TextBook.h"

#ifndef COURSE_H
#define COURSE_H

class Course
{
private:

    string courseName; // Course name
    string courseCode;
    Instructor instructor; // Instructor
    TextBook textbook; // Textbook

public:
    Course();

    Course(string, string, string, string,
        string, string, string, string,
        string, string); // Constructor

    Course(string, string, const Instructor, const TextBook);

    Course(const Course&);

    void setCourseName(string);
    void setCourseCode(string);
    void setInstructor(string, string, string, string);
    void setInstructor(const Instructor);

    void set(string, string, string, string,
        string, string, string, string, string,
        string);

    void setTextBook(string, string, string, string);
    void setTextBook(const TextBook);

    string getCourseName() const;
    string getCourseCode() const;
    Instructor getInstructor() const;
    TextBook getTextBook() const;
    void print() const;

    friend ostream& operator<< (ostream&, const Course&);
    friend istream& operator>> (istream&, Course&);

};
#endif