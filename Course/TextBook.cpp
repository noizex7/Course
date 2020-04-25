#include "TextBook.h"


TextBook::TextBook()
{
    title = "";
    author = "";
    publisher = "";
    edition = "";
}

TextBook::TextBook(string textTitle, string auth, string pub, string ed)
{
    set(textTitle, auth, pub, ed);
}

TextBook::TextBook(const TextBook& aTextBook)
{
    set(aTextBook.getTitle(), aTextBook.getAuthor(),
        aTextBook.getPublishr(), aTextBook.getEdition());
}

void TextBook::set(string textTitle, string auth, string pub, string ed)
{
    setTitle(textTitle);
    setAuthor(auth);
    setPublisher(pub);
    setEdition(ed);
}

void TextBook::setTitle(string textTitle)
{
    title = textTitle;
}

void TextBook::setAuthor(string auth)
{
    author = auth;
}

void TextBook::setPublisher(string pub)
{
    publisher = pub;
}

void TextBook::setEdition(string ed)
{
    edition = ed;
}

string TextBook::getTitle() const
{
    return title;
}

string TextBook::getAuthor() const
{
    return author;
}

string TextBook::getPublishr() const
{
    return publisher;
}

string TextBook::getEdition() const
{
    return edition;
}

void TextBook::print() const
{

}

ostream& operator<< (ostream& strm, const TextBook& obj)
{
    strm << setw(25) << left << obj.title << setw(35) << left << obj.author
        << setw(15) << obj.publisher << setw(6) << left << obj.edition;

    return strm;
}

istream& operator>> (istream& strm, TextBook& obj)
{
    cin.clear();

    cout << "Enter the textbook's title:\n";
    getline(cin, obj.title);

    cin.clear();

    cout << "Enter the textbook's Author:\n";
    getline(cin, obj.author);

    cin.clear();

    cout << "Enter the textbook's Publisher:\n";
    getline(cin, obj.publisher);

    cin.clear();

    cout << "Enter the textbook's Edition:\n";
    getline(cin, obj.edition);

    cin.clear();

    return strm;
}
