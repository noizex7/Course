#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#ifndef TEXTBOOK
#define TEXTBOOK

// TextBook class
class TextBook
{
private:
    string title; // Book title
    string author; // Author name
    string publisher; // Publisher name
    string edition;
public:
    // The default constructor stores empty strings in the string objects.
    TextBook(); // Constructor
    TextBook(string, string, string, string);
    TextBook(const TextBook&);
    void set(string, string, string, string); // set function
    void setTitle(string);
    void setAuthor(string);
    void setPublisher(string);
    void setEdition(string);
    string getTitle() const;
    string getAuthor() const;
    string getPublishr() const;
    string getEdition() const;
    void print() const; // print function

    friend ostream& operator<< (ostream&, const TextBook&);
    friend istream& operator>> (istream&, TextBook&);
};
#endif